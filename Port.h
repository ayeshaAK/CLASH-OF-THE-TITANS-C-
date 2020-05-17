/*
 * Port.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef PORT_H_
#define PORT_H_

class Port {
	string type ;
	int baud_rate ;
public:
	Port();
	Port ( string , int ) ;
	~Port();
	int getBaudRate() const;
	void setBaudRate(int baudRate);
	string getType() const;
	void setType(string type);
};

#endif /* PORT_H_ */
