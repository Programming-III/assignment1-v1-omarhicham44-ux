#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal
{
private:
	bool isVenemous;
public:
	Reptile();
	Reptile(string n; int a; bool h;bool V ) :Animal(n; a; h);
	~Reptile();
	void SetV(bool h);
	bool GetV();
}









#endif
