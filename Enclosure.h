#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure
{
private :
	Animal* animals;
	int capacity;
	int current count;
public:
	Enclosure();
	Enclosure(Animal* a; int ca; int cu);
	~Enclosure();
	void addAnimal(Animal* a);
	void displayAnimals();
	Animals* getAnimals();
	void SetAnimals(Animals* a);
	int Getca();
	void Setca(int a);
	int Getcu();
	void SetCu();
};








#endif
