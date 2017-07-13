#include <stdio.h>

class Person {
private:
	char * name;
	int age;

public :
	void setName(char * name) {
		this->name = name;
	}

	void setAge(int age) {
		this->age = age;
	}

	void printInfo(void) {
		printf("name = %s, age = %d\n", this->name, this->age);
	}
};

int main(void)
{
	printf("hello world!\n");

	Person p;
	p.setName("zhangSan");
	p.setAge(12);
	p.printInfo();

	return 0;
}
