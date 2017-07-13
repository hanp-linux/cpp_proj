#include <stdio.h>
#include "person.h"
#include "dog.h"

using namespace P;
using namespace D;

int main(void)
{
	Person p;
	p.setName("zhangsan");
	p.setAge(15);
	p.printInfo();

	Dog dog;
	dog.setName("xiaoHui");
	dog.setAge(1);
	dog.printInfo();

	P::printVersion();
	D::printVersion();

	return 0;
}
