
#ifndef HYDRA_H_
#define HYDRA_H_

#include<iostream>
#include"Creature.h"

class Hydra : public Creature
{
	private:
		int neckLength,poisonDose;
	public:
		Hydra(const string n="",int l=0,int hs=0,int f=0,int nl=0,int pd=0,int p=0);
		~Hydra();
		int getNeckLength() const;
		void setNeckLength(int neckLength);
		int getPoisonDose() const;
		void setPoisonDose(int poisonDose);
		void InjectPoison(Creature &obj);
};

#endif /* HYDRA_H_ */
