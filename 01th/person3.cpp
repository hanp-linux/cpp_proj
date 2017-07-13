#include <stdio.h>
#include <string.h>
#include <unistd.h>

class Person {
private:
	char * name;
	int age;

public :
	Person() {
	}

	Person(int age) {
		this->age = age;
		name = NULL;
	}

	Person(char * name, int age = 0)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}

	/*  xi gou han shu, be exec when this class is free de zui hou yi ke  */
	~Person() {
//		printf("~person\n");
		if (this->name)
			delete this->name;
	}

	void printInfo(void) {
		printf("name = %s, age = %d\n", this->name, this->age);
	}

};

int test(void)
{
	Person p2("zhangsan", 5);

	return 0;
}

int main(void)
{
	for (int i = 0; i < 100000; i++)
		test();

	sleep(10);

	return 0;
}
