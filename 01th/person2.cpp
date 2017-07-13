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
	printf("hello world!\n");

	Person p1;
	Person p("zhangsan");
	p.printInfo();

	Person p2("zhangsan", 5);
	p2.printInfo();


	Person * p3 = new Person;
	Person * p4 = new Person();
	Person * p5 = new Person[2];
	Person * p6 = new Person("lisi");
	p6->printInfo();

	delete p3;
	delete p4;
	delete []p5;
	delete p6;

	return 0;
}
