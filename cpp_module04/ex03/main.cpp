#include "Animal.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
void check(){
	system("leaks Animal");
}

void func(){
	{
		Dog a;
		Dog b(a);
	}
	AAnimal *arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		if(i < 5)
			arr[i] = new Dog;
		else
			arr[i] = new Cat;
	}
	// AAnimal a;
	for (size_t i = 0; i < 10; i++)
		delete arr[i];
}

int main()
{
	atexit(check);
	std::cout << "/*******************test ex01***************************/";
	func();
	std::cout << "/*******************test ex01***************************/";
	{
		// const AAnimal* meta = new AAnimal(); error
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		
		delete i;
		delete j;
		// delete meta;
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