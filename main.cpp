#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


Visitor()
{
	VisitorName = "";
	Tickets = 0;	
}
Visitor(string V; int t)
{
	VisitorName = V;
	Tickets = t;	
}
~Visitor()
{

}
void displayVis()
{
	cout << "Visitor Info" << endl;	
	cout << "Name: " << VisitorName <<endl;
	cout << "Tickets Bougths: " << Tickets <<endl;	
}
void SetVisitor(string name)
{
	VisitorName = name;	
}
string GetVisitor()
{
	return VisitorName;	
}
void Settickets(int c)
{
	Tickets = c;
}
int GetTickets()
{
	return Tickets;	
}
Enclosure()
{
	animals = nullptr;
	capacity = 0;
	current count = 0;	
}
Enclosure(Animal* a; int ca; int cu)
{
	animals = a;
	capacity = ca;
	current count = cu;	
}
~Enclosure()
{
	delete [] animals;	
}
void addAnimal(Animal* a)
{
	if (current count < capacity)
	{
		animals[current count] = *a;
		current count++;
	}
	else
	{
		cout << "Enclosure is full" << endl;	
	}	
}
void displayAnimals()
{
	for (int i = 0; i < current count; i++)
	{
		animals[i].display();	
	}	
}
Animals* getAnimals()
{
	return animals;	
}
void SetAnimals(Animals* a)
{
	animals = a;	
}
int Getca()
{
	return capacity;	
}
void Setca(int a)
{
	capacity = a;	
}
int Getcu()
{
	return current count;	
}
void SetCu()
{
	current count = cu;	
}
Reptile()
{
	isVenemous = false;	
}
Reptile(string n; int a; bool h; bool V) :Animal(n; a; h)
{
	isVenemous = V;
}
~Reptile() {

}
void SetV(bool h)
{
	isVenemous = h;	
}
bool GetV()
{
	return isVenemous;	
}

Bird() {
	wingspan = 0.0;	
}
Bird(string n; int a; bool h; float w) :Animal(n; a; h)
{
	wingspan = w;	
}
~Bird()
{

}
float GetWings()
{
	return wingspan;	
}	
void SetWingd(float f)
{
	wingspan = f;	
}
Mammal()
{
	furcolor = "";	
}
Mammal(string n; int a; bool h; string f) :Animal(n; a; h) : Animal(n; a; h)	
{
	furcolor = f;	
}
~Mammal()
{

}

void SetColor(string f){
	furcolor = f;	
}	
	

string GetColor()
{
	return furcolor;	
}
void  Animal::display()
{
	cout << name<<"("<< age<<","<< isHungry<<")"<<endl;

}

void Animal ::feed()
{
	if (isHungry == true)
		cout << "hungry";
	else
		cout << "Not hungry";
}
Animal::Animal()
{
	name = "Unknown";
	age = 0;
	isHungry = true;
}
Animal::Animal(string n; int a; bool h)
{
	name = n;
	age = a;
	isHungry = h;	
}
~Animal()
{

}
void Setname()
{
	name = n;	
}
void Setage() {
	age = a;	
}
void SetHungry()
{
	isHungry = h;	
}
String Getname()
{
	return name;	
}
int GetAge();
{
	return age;	
}
bool GetHungry() {
	return isHungry;	
}
int main() {
    
    Animal* a[10];
Enclosure e = Enclosure(a; 1; 1);	
Mammal m = Mammal("Lion"; 5; true; "Golden");	
Bird b = Bird("Parrot"; 2; false; 2.5);	
Reptile r = Reptile("Snake"; 3; true; true);	
Visitor v = Visitor("Sarah ali "; 3);
m.display();
b.display();
r.display();
v.displayVis();
    return 0;
}
