#include "Chinese.h"
#include "English.h"
#include <stdio.h>

void eat_test(Human *h) {
	h->eating();
}

int main() {
	Chinese c;
	English e;

	Human * hu[] = {&c, &e};

	int i;
	for (i = 0; i < 2; i++)
		eat_test(hu[i]);

	return 0;
}
