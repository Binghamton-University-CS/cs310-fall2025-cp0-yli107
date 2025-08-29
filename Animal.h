#ifndef ANIMAL_H
#define ANIMAL_H
#include <stdlib.h>
#include <iostream>
using namespace std;

class Animal {
	public: 
		Animal(string speciesName, unsigned int discovery);
		Animal();
		void display();

	private:
		string species = "";
		unsigned int year_discovered = 0;
};

#endif 
