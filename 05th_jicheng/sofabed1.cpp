#include <iostream>
#include <string.h>

using namespace std;

class Furniture {
private:
	int weight;

public :
	int getWeight() {
		return this->weight;
	}

	void setWeight(int weight) {
		this->weight = weight;
	}
};

/* 虚拟继承，当两个类中有一样的成员的时候可以把相同的成员抽取到一个基类中，然后虚拟继承这个基类，公用相同的资源，c++中继承不写public默认为私有继承 */
class Sofa : virtual public Furniture{
public :
	void sleep() {
		cout<<"sleep"<<endl;
	}

};

class Bed : virtual public Furniture{
public :
	void watchTV() {
		cout<<"watch TV"<<endl;
	}
};

class SofaBed : public Sofa, public Bed {

};

int main() {
	SofaBed s;
	
	s.sleep();
	s.watchTV();

	s.getWeight();

	return 0;
}
