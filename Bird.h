#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal
{
private:
	float wingspan;
public:
	Bird();
	Bird(string n; int a; bool h; float w) :Animal(n; a; h);
	~Bird();
	float GetWings();
	void SetWingd(float f);
}







#endif
