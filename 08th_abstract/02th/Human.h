
#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <string.h>

class Human {
private:
	char * name;

public :
	char *getName();
	void  setName(char * name);
};

#endif
