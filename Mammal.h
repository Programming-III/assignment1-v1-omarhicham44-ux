#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal
{
private :
	string furcolor;
public:
	Mammal();
	Mammal(string n; int a; bool h; string f) :Animal(n; a; h);
	~Mammal();
	void SetColor(string f);
	string GetColor();
}






#endif
