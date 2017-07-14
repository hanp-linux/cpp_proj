#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class MyException {
public:
	//多态
	virtual void what(void)
	{
		cout<<"this is a MyException!"<<endl;
	}
};

class MySubException : public MyException{
public:
	void what(void)
	{
		cout<<"this is a MySubException!"<<endl;
	}
};

void C(int i)
{
	int a = 1;
	float b = 2.0;
	double c = 3.0;

	if (i == 0)
	{
		cout<<"C_fun is ok!"<<endl;
	}
	else if (i == 1)
		throw a;
	else if (i == 2)
		throw b;
	else if (i == 3)
		throw c;
	else if (i == 4)
		throw MyException();
	else if (i == 5)
		throw MySubException();
}

void B(int i)
{
	cout<<"before call c"<<endl;
	C(i);
	cout<<"after call c"<<endl;
}

void A(int i)
{
	try {
		B(i);
	} catch (int a)	{
		cout<<"catch a excepting: "<<a<<endl;
	} catch (MyException &e) {
		e.what();	
	} catch (...) {
		cout<<"other excepting catched!..."<<endl;
	}
}

int main(int argc, char **argv)
{
	int i;
	if (argc != 2)
	{
		cout<<"Usage: "<<argv[0]<<" 0 | 1 | 2 | 3"<<endl;
		return -1;
	}

	i = strtoul(argv[1], NULL, 0);
	A(i);

	return 0;
}
