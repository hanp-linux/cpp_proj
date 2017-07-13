#include "Human.h"
#include <stdio.h>

void eat_test(Human *h) {
	h->eating();
}

int main() {
	Human & c = CreateChinese("zhangsana", 10);
	Human & e = CreateChinese("Bill", 10);

	Human * hu[] = {&c, &e};

	int i;
	for (i = 0; i < 2; i++)
		eat_test(hu[i]);

	delete &c;
	delete &e;

	return 0;
}
