#include <stdio.h>

class Person {
private:
	char * name;
	int age;

public :
	Person() {
		printf("Person()\n");
	}

	Person(int age) {
		this->age = age;
	}

	Person(char * name, int age = 0)
	{
		printf("Person(char *, int)\n");
		this->name = name;
		this->age = age;
	}

	void printInfo(void) {
		printf("name = %s, age = %d\n", this->name, this->age);
	}
};

int main(void)
{
	Person p1;
	Person p("zhangsan");
	p.printInfo();

	return 0;
}
