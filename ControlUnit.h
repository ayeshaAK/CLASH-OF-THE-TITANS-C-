/*
 * ControlUnit.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef CONTROLUNIT_H_
#define CONTROLUNIT_H_


class ControlUnit 
{
	double clock ;
public:
	ControlUnit();
	ControlUnit ( double ) ;
	~ControlUnit();
	double getClock() const;
	void setClock(double clock);
};

#endif /* CONTROLUNIT_H_ */
