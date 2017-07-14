#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <exception>

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

/* 声明有两种异常,其他异常都属于意外之外的异常 */
void C(int i) throw (int, float)
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

/* 出现意料之外的异常会调用这个函数 */
void my_unexpected_fun()
{
	cout<<"my_unexpected_fun()"<<endl;
}

/* 出现意料之外的异常和未被捕获(catch)的异常都会调用这个函数 */
void my_terminate_fun()
{
	cout<<"my_terminate_fun()"<<endl;
}

void B(int i)
{
	cout<<"before call c"<<endl;
	C(i);
	cout<<"after call c"<<endl;
}

void A(int i)
{
	set_unexpected(my_unexpected_fun);
	set_terminate(my_terminate_fun);
	try {
		B(i);
	} catch (int a)	{
		cout<<"catch a excepting: "<<a<<endl;
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
