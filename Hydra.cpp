
#include "Hydra.h"



Hydra::Hydra(const string n,int l,int hs,int f,int nl,int pd,int p) : Creature(n)
{
	setLevel(l);
	setHealthStatus(hs);
	setForce(f);
	setPosition(p);
	poisonDose = pd;
	neckLength = nl;
}

int Hydra::getNeckLength() const {
	return neckLength;
}

void Hydra::setNeckLength(int neckLength) {
	this->neckLength = neckLength;
}

int Hydra::getPoisonDose() const {
	return poisonDose;
}

void Hydra::setPoisonDose(int poisonDose) {
	this->poisonDose = poisonDose;
}

void Hydra::InjectPoison(Creature &obj)
{
	int dist = distance(getPosition(),obj.getPosition());
	if(alive() && obj.alive() && dist<=neckLength)
	{
		obj.Weak(AttackPoints()+poisonDose);
//		Weak(dist);
		if(alive() && !(obj.alive()))
			setLevel(getLevel()+1);;
	}
}


Hydra::~Hydra() {
	setLevel(0);
	setHealthStatus(0);
	setForce(0);
	setPosition(0);
	poisonDose = 0;
	neckLength = 0;
}

