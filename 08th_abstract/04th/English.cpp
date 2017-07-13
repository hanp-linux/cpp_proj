#include "English.h"

void English::eating() {
	cout<<"eating with daocha!!!"<<endl;
}

void English::driver() {
	cout<<"driver aodi car!!!"<<endl;
}

English::English() {
	cout<<"English()"<<endl;
}

English::English(char *name, int age) {
	cout<<"English(char *name, int age)"<<endl;
	setName(name);
	this->age = age;
}

English::~English() {
	cout<<"~English()"<<endl;
}

Human & CreateEnglish(char * name, int age) {
	return *(new English(name, age));
}
