#include <iostream>
#include "dog.h"

namespace D {

using namespace std;

void Dog::setName(char * name) {
	this->name = name;
}

void Dog::setAge(int age) {
	this->age = age;
}

void Dog::printInfo(void) {
	cout<<"name = "<<name<<"age = "<<age<<endl;
}

void printVersion(void) {
	cout<<"this is a dog class: v1"<<endl;
}

}

