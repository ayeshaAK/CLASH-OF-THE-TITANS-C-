#include <iostream>
#include <cmath>
using namespace std;


//-----------Class Creature.h--------------
class Creature {
protected:
	string name;
	int level;
	int points;
	int force;
public:
	int position;
	Creature(string n, int l, int h, int f, int p = 0);
	~Creature();
	bool alive();
	int AttackPoints();
	void Move(int x);
	void GoodBye();
	void Weak(int x);
	void display();
	int distance(int x, int y);
};



//-----------Class Dragon.h----------- 
#include "Creature.h"

class Dragon: public Creature {
	int flameRange;
public:
	Dragon(string n, int l, int h, int f, int fr, int p = 0);
	~Dragon();
	void Fly(int pos);
	void BlowFlame(Creature& c);
};



//------------Class Hydra------------

#include "Creature.h"

class Hydra: public Creature {
private:
	int neckLength;
	int poisonDose;
public:
	Hydra(string n, int l, int h, int f, int nl, int pd, int p = 0);
	~Hydra();
	void InjectPoison(Creature& c);
};


//-----------Dragons.cpp------ THis is main class which is 
//already provided to you, you have to add the below public function to it. 
//This function does'nt belong to anyone

#include "Dragon.h"
#include "Hydra.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void Fight(Dragon& d, Hydra& h) {
	h.InjectPoison(d);
	d.BlowFlame(h);
}

int main() {
	Dragon dragon("Dragon red", 2, 10, 3, 20);
	Hydra hydra("Hydra evil", 2, 10, 1, 10, 1, 42);

	dragon.display();
	cout << endl<<"is preparing for fight with :" << endl;
	hydra.display();

	cout << endl;
	cout << "1st Fight :" << endl;
	cout << "    the creatures are not within range, so can not Attack."
			<< endl;
	Fight(dragon, hydra);

	cout <<endl<< "After the Fight :" << endl;
	dragon.display();
	hydra.display();

	cout << endl;
	cout <<endl<<"Dragon has flown close to Hydra :" << endl;
	dragon.Fly(hydra.position - 1);
	dragon.display();

	cout << endl;
	cout << "Hydra moves :" << endl;
	hydra.Move(1);
	hydra.display();

	cout << endl;
	cout << endl<<"2nd Fight :" << endl;
	cout << ""
			<< "+ Hydra inflicts a 3-point attack on dragon\n"
					" [ level (2) * force (1) + poison (1) = 3 ] ;\n"
					"+ Dragon inflicts a 6-point attack on Hydra\n"
					"[ level (2) * force (3) = 6 ] ;\n"
					"+ during his attack, dragon loses two additional points\n"
					"      [ corresponding to the distance between dragon and hydra : 43 - 41 = 2 ]."
			<< endl;
	Fight(dragon, hydra);

	cout << "After the Fight :" << endl;
	dragon.display();
	hydra.display();

	cout << endl;
	cout << "Dragon moves by one step " << endl;
	dragon.Move(1);
	dragon.display();

	cout << endl;
	cout << "3rd Fight :" << endl;
	cout
			<< "  + Hydra inflicts a 3-point attack on dragon \n "
					"    [ level (2) * force (1) + poison (1) = 3 ] ; \n "
					"+ Dragon inflicts a 6-point attack on Hydra \n "
					"      [ level (2) * force (3) = 6 ] ; \n"
					"+ during his attack, dragon lost 1 additional life point.\n"
					"[ corresponding to the distance between dragon and hydra : 43 - 42 = 1 ] ;\n"
					"+ Hydra is defeated and the dragon rises to level 3"
			<< endl;
	Fight(dragon, hydra);

	cout << "After the Fight :" << endl;
	dragon.display();
	hydra.display();

	cout << endl;
	cout << "4th Fight :" << endl;
	cout << "    when one creatures is defeated, nothing happpens" << endl;
	Fight(dragon, hydra);

	cout << "After the Fight :" << endl;
	dragon.display();
	hydra.display();
	_getch();
	return 0;
}