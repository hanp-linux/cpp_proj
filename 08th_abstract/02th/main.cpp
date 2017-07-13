#include "Chinese.h"
#include <stdio.h>

int main() {
	Chinese c;

	c.setName("zhangsan");
	cout<<c.getName()<<endl;

	Human h;
	h.setName("hanpeng");
	printf("name = %s\n", h.getName());

	c.eating();
	c.driver();


	return 0;
}
