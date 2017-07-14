#include <iostream>
#include <string.h>

using namespace std;

/* 这是一个模板类 */
template <typename T>
class AAA {
private:
	T t;
public :
	void test_func(const T & t)
	{
		this->t = t;
	}

	void test_print(void);
};

template <typename T>
void AAA<T>::test_print(void)
{
	cout<<t<<endl;
}

/* 模板类的重载 */
template <>
class AAA<int>{
private:
	int a;
public :
	void test_func_a(const int & a);
	void test_print_a(void);
}; 

void AAA<int>::test_func_a(const int &  a) 
{
	this->a = a;
}

void AAA<int>::test_print_a(void)
{
	cout<<a<<endl;
}

int main()
{
	AAA<int> a;
	AAA<double> d;
	
	a.test_func_a(3);
	a.test_print_a();

	d.test_func(3.14);
	d.test_print();
}
