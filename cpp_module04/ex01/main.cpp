#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
void check(){
	system("leaks Animal");
}

void func(){
	Animal *arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		if(i < 5)
			arr[i] = new Dog;
		else
			arr[i] = new Cat;
	}
	for (size_t i = 0; i < 10; i++)
		delete arr[i];
}

int main()
{
	// atexit(check);
	std::cout << "/*******************test ex01***************************/";
	func();
	std::cout << "/*******************test ex01***************************/";
	return 0;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
			delete i;
		delete j;
		delete meta;
	}
	std::cout <<"*****************Wrong animal iplementation*****************\n";
	/*Wrong animal*/
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		meta->makeSound();
		delete i;
		delete meta;
	}
return 0;
}