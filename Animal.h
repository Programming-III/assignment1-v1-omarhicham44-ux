#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
	string name;
	int age;
	bool isHungry;
public :
	void display();
	void feed();
	Animal();
	Animal(string n; int a; bool h);
	~Animal();
	void Setname();
	void Setage();
	void SetHungry();
	string Getname();
	int GetAge();
	bool GetHungry();
 }; 



#endif
