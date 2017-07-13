#include <iostream>
#include "person.h"

namespace P {

void Person::setName(char * name) {
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::printInfo(void) {
	std::cout<<"name = "<<name<<"age = "<<age<<std::endl;
}

void printVersion(void) {
	std::cout<<"this is a person class: v1"<<std::endl;
}

}

