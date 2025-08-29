#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
#include "Animal.cpp"
#include "AnimalsInZoo.cpp"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("White Tiger", 1390);
   AnimalsInZoo animalInZoo(animal3);
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();
   animalInZoo.display();
   delete animal1;
}
