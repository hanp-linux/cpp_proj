#include <iostream>
#include <string.h>

using namespace std;

/* 用模板函数实现判断两个int、float等类型的值的大小，如果不用模块就需要每个类型都实现一个函数，比较麻烦 */

template<typename T>
/* 模板函数参数的类型必须一致，然后支持有限的隐式类型转换比如const 数组指针 */
/* 这个地方是int 转为const int 但是反过来是不行的 */

/* 这称之为函数的重载，当调用my_max时，编译器会将对应的函数排名，
 * 第一个函数需要int=>const int 排第二
 * 第二个函数和第三个都不用转换int->int 所以并列第一
 * 但是第三个函数是普通函数，而第二个是模板函数，所以优先选择普通函数*/
const T &my_max(const T &a, const T &b)
{
	cout<<"1: "<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}

template<typename T>
const T &my_max(T &a,T &b)
{
	cout<<"2: "<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}

int &my_max(int &a, int &b)
{
	cout<<"3: "<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}
#if 0
#endif

int main()
{
	int a = 1;
	int b = 2;

	cout<<my_max(a, b)<<endl;
}
