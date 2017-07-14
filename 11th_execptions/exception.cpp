#include <iostream>
#include <string.h>

using namespace std;

void C(int i)
{
	throw 1;
}

void B(int i)
{
	C(i);
}

void A(int i)
{
	try {
		B(i);
	} catch (int a)	{
		cout<<"catch a excepting: "<<a<<endl;
	}
}

int main()
{
	A(1);

	return 0;
}
