#include <iostream>

using namespace std;


/* 包含有纯虚函数的类称之为抽象类, 抽象类不能实例化对象 */
class Human {
public :
	//纯虚函数
	virtual void eating() = 0; 
	virtual void driver() = 0; 
};

class Englishman : public Human{
public :
	void eating() {
		cout<<"eating with daocha!!!!"<<endl;
	}
	virtual void driver(){ 
		cout<<"driver english car!!!!"<<endl;
	}
};

/* 如果一个类继承于抽象类，但是没有完全复写父类的纯虚函数，那么这个子类也是抽象类 */
class Chinese : public Human{
public :
	void eating() {
		cout<<"eating with kuaizi!!!"<<endl;
	}

#if 1
	virtual void driver(){ 
		cout<<"driver hongqi car!!!!"<<endl;
	}
#endif
};

int main() {
	Englishman e;
	Chinese c;
}
