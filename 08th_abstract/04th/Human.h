
#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <string.h>

using namespace std;

class Human {
private:
	char * name;

public :
	char *getName();
	void  setName(char * name);
	virtual void eating() = 0;
	virtual void driver() = 0;

	Human();

	virtual ~Human(){ cout<<"~Human()"<<endl; }
};

Human & CreateEnglish(char * name, int age);
Human & CreateChinese(char * name, int age);

#endif
