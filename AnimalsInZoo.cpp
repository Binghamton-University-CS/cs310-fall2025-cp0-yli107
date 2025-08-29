#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo()
{
	numAnimals = 0;
}

AnimalsInZoo::AnimalsInZoo(Animal anim)
{
	animal = anim; 
	numAnimals = 1;
}

void AnimalsInZoo::display()
{
	cout << numAnimals << endl;
	animal.display();
}
