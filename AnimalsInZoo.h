#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

class AnimalsInZoo : public Animal {
	public:
		AnimalsInZoo(Animal anim);
		AnimalsInZoo();
		void display();
	private:
		int numAnimals;
		Animal animal;
};
#endif
