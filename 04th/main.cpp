#include <iostream>

using namespace std;

int add(int a, int b)
{
	cout<<"add int+int"<<endl;
	return a+b;
}

int add(int a, int b, int c)
{
	cout<<"add int+int+int"<<endl;
	return a+b+c;
}

int add_one(int *a)
{
	*a = *a + 1;
	return *a;
}

/* yin yong
 *
 *	int &b = a;
 *	b = b + 1;
 *
 *	b and a  point a same addr
 *
 * */
int add_one_1(int &b)
{
	b = b + 1;
	return b;
}

int main(void)
{
	int a = 99;

	cout<<"add_one(&a) = "<<add_one(&a)<<endl;
	cout<<"a = "<<a<<endl;

	cout<<"add_one_1(a) = "<<add_one_1(a)<<endl;
	cout<<"a = "<<a<<endl;
}
