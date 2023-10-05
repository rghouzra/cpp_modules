#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


void check(){
	system("leaks Animal");
}

int main2()
{	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

int main(){
	atexit(check);

	Character *ch;
	ch = new Character;
	AMateria *tab[4] = {new Cure, new Ice, new Cure, new Ice};
	ch->equip(tab[0]);
	ch->equip(tab[1]);
	ch->equip(tab[2]);
	ch->equip(tab[3]);

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << ch->getSlotAtIndex(i)->getType()  << "\n";
	}
	for (size_t i = 0; i < 4; i++){
		ch->unequip(i);
	}
	for (size_t i = 0; i < 4; i++){
		delete tab[i];
	}
	delete ch;
	// main2();
}