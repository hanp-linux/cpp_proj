#include <stdio.h>
#include "person.h"

void Person::setName(char * name) {
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::printInfo(void) {
	printf("name = %s, age = %d\n", this->name, this->age);
}

