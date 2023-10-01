#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
void check(){
	system("leaks Animal");
}

void func(){
		// const Animal* j = new Dog();
		const Animal* i = new Cat();
		// delete j;//should not create a leak
		delete i;
		i = NULL;
}

int main()
{
	
	// atexit(check);
	func();
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