
#ifndef _CHINESE_H
#define _CHINESE_H

#include <string.h>
#include <iostream>
#include "Human.h"

using namespace std;

class Chinese : public Human {
private:
	int age;

public :
	void eating();	
	void driver();	
	Chinese();
	Chinese(char *name, int age);
	~Chinese();
}; 

#endif



