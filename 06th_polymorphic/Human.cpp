#include <iostream>

using namespace std;


class Human {
public :
	//使用多态是，无论传入的是哪个对象，最终都还是调用的是Human的eating函数
	//void eating() {

	//当用virtual修饰表示这是一个虚函数，编译器编译的时候采用动态编译，也就是对象里面有个指向这个虚函数的指针
	virtual void eating() {
		cout<<"eating with hand!!!"<<endl;
	}
};

class Englishman : public Human{
public :
	//复写
	void eating() {
		cout<<"eating with daocha!!!!"<<endl;
	}
};

class Chinese : public Human{
public :
	void eating() {
		cout<<"eating with kuaizi!!!"<<endl;
	}
};

void test_eating(Human & h) {
	h.eating();
}

int main() {
	Human h;
	Englishman e;
	Chinese c;
	
	test_eating(h);
	test_eating(e);
	test_eating(c);
}
