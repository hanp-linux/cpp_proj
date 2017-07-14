#include <iostream>
#include <string.h>

using namespace std;

/* 用模板函数实现判断两个int、float等类型的值的大小，如果不用模块就需要每个类型都实现一个函数，比较麻烦 */

template<typename T>

//int &my_max(int &a, int &b)

/* 模板函数参数的类型必须一致，然后支持有限的隐式类型转换比如const 数组指针 */
/* 这个地方是int 转为const int 但是反过来是不行的 */
const T &my_max(const T &a, const T &b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}

template<typename T>
const T * my_max1(const T * a, const T * b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}

template<typename T>
void test_func(T f)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}

int func(int a, int b)
{
	return 0;
}

int main()
{
	char a[] = "ab";
	char b[] = "ef";

	char a1[] = "abc";
	char b1[] = "ef";



	my_max(a, b);	
	my_max(a, b);
	my_max1(a, b);
	//my_max(a1, b1);//err,因为ca1是char[4]而cb1是char[3]导致两个T不一样，所以失败
	my_max1(a1, b1);//ok, 因为转换为了 const char * 和const char *


	/* 无论传入的是函数还是引用，最终都转换为函数指针 */
	test_func(func);
	test_func(&func);
}
