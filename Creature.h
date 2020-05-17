

#ifndef CREATURE_H_
#define CREATURE_H_

#include<iostream>
#include<string>
using namespace std;

class Creature
{
	private:
		const string name;
		int level,healthStatus,force,position;
	public:
		Creature(const string n="",int l=0,int hs=0,int f=0,int p=0);
		~Creature();
		int getForce() const;
		void setForce(int force);
		int getHealthStatus() const;
		void setHealthStatus(int healthStatus);
		int getLevel() const;
		void setLevel(int level);
		const string& getName() const;
		int getPosition() const;
		void setPosition(int position);
		bool alive();
		int AttackPoints();
		void Move(int);
		void GoodBye();
		void Weak(int);
		void display();
};

#endif /* CREATURE_H_ */
