#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
private:
	string VisitorName;
	int Tickets;
public:
	Visitor();
	Visitor(string V; int t);
	~Visitor();
	void displayVis();
	void SetVisitor(string name);
	string GetVisitor();
	void Settickets(int c);
	int GetTickets();

};







#endif
