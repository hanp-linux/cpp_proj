#include <iostream>
#include <string.h>

using namespace std;

/* 用模板函数实现判断两个int、float等类型的值的大小，如果不用模块就需要每个类型都实现一个函数，比较麻烦 */

template<typename T>

//int &my_max(int &a, int &b)
T &my_max(T &a, T &b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a > b ? a : b);
}

int main()
{
	int ia = 1, ib = 2;
	float fa = 1, fb = 2;
	double da = 4, db = 3;

	my_max(ia, ib);	
	my_max(fa, fb);	
	my_max(da, db);	
}
