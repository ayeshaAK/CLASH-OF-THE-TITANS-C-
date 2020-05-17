
#ifndef DRAGON_H_
#define DRAGON_H_

#include<iostream>
#include"Creature.h"

class Dragon : public Creature
{
	private:
		int flameRange;
	public:
		Dragon(const string n="",int l=0,int hs=0,int f=0,int p=0,int fr=0);
		~Dragon();
		int getFlameRange() const;
		void setFlameRange(int flameRange);
		void Fly(int pos);
		void BlowFlame(Creature &obj);
};

#endif /* DRAGON_H_ */
