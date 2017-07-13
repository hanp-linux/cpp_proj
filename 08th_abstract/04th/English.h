
#ifndef _ENGLISH_H
#define _ENGLISH_H

#include <string.h>
#include <iostream>
#include "Human.h"

using namespace std;

class English : public Human {
private:
	int age;
public :
	void eating();	
	void driver();	
	English();
	English(char *name, int age);
	virtual ~English();
}; 

#endif



