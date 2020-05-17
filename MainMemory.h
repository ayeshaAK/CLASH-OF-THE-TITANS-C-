/*
 * MainMemory.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef MAINMEMORY_H_
#define MAINMEMORY_H_
#include <cstring>

class MainMemory {
	int capacity ;
	string technologyType ;
public:
	MainMemory();
	MainMemory ( int , string ) ;
	~MainMemory();
	int getCapacity() const;
	void setCapacity(int capacity);
	string getTechnologyType() const;
	void setTechnologyType(string technologyType);
};

#endif /* MAINMEMORY_H_ */
