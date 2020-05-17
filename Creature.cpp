
#include "Creature.h"

Creature::Creature(const string n,int l,int hs,int f,int p):name(n)
{
	level = l;
	healthStatus = hs;
	force = f;
	position = p;
}

int Creature::getForce() const {
	return force;
}

void Creature::setForce(int force) {
	this->force = force;
}

int Creature::getHealthStatus() const {
	return healthStatus;
}

void Creature::setHealthStatus(int healthStatus) {
	this->healthStatus = healthStatus;
}

int Creature::getLevel() const {
	return level;
}

void Creature::setLevel(int level) {
	this->level = level;
}

const string& Creature::getName() const {
	return name;
}

int Creature::getPosition() const {
	return position;
}

void Creature::setPosition(int position) {
	this->position = position;
}

bool Creature::alive()
{
	if(healthStatus>0)
		return true;
	return false;
}

int Creature::AttackPoints()
{
	if(alive())
		return level*force;
	return 0;
}

void Creature::Move(int m)
{ position += m; }

void Creature::GoodBye()
{ cout<<name<<" is no more!"<<endl; }

void Creature::Weak(int p)
{
	healthStatus -= p;
	if(healthStatus<=0)
	{
		healthStatus = 0;
		GoodBye();
	}
}

void Creature::display()
{ cout<<name<<", level: "<<level<<", health_status: "<<healthStatus<<", force: "<<force<<", attacking points: "<<AttackPoints()<<", postion: "<<position<<endl; }

Creature::~Creature() {
	level = 0;
	force = 0;
	position = 0;
	healthStatus = 0;
}

