
#include "Dragon.h"


Dragon::Dragon(const string n,int l,int hs,int f,int fr,int p) : Creature(n)
{
	setLevel(l);
	setHealthStatus(hs);
	setForce(f);
	setPosition(p);
	flameRange = fr;
}

int Dragon::getFlameRange() const {
	return flameRange;
}

void Dragon::setFlameRange(int flameRange) {
	this->flameRange = flameRange;
}

void Dragon::Fly(int pos)
{ setPosition(pos); }

void Dragon::BlowFlame(Creature &obj)
{
	int dist = distance(getPosition(),obj.getPosition());
	if(alive() && obj.alive() && dist<=flameRange)
	{
		obj.Weak(AttackPoints());
		Weak(dist);
		if(alive() && !(obj.alive()))
				setLevel(getLevel()+1);
	}
}

Dragon::~Dragon() {
	setLevel(0);
	setHealthStatus(0);
	setForce(0);
	setPosition(0);
	flameRange = 0;
}
