#include <stdio.h>
#include "person.h"

int main(void)
{
	printf("hello world!\n");

	Person p;
	p.setName("zhangSan");
	p.setAge(12);
	p.printInfo();

	return 0;
}
