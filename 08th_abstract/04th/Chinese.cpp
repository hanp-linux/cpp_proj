#include "Chinese.h"

void Chinese::eating() {
	cout<<"eating with kuaizi!!!"<<endl;
}

void Chinese::driver() {
	cout<<"driver hongqi car!!!"<<endl;
}

Chinese::Chinese() {
	cout<<"Chinese()"<<endl;
}

Chinese::Chinese(char * name, int age) {
	cout<<"Chinese(char * name, int age)"<<endl;
	setName(name);
	this->age = age;
}

Chinese::~Chinese() {
	cout<<"~Chinese()"<<endl;
}

Human & CreateChinese(char * name, int age) {
	return *(new Chinese(name, age));
}
