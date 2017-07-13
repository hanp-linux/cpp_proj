#include <iostream>
#include <string.h>

using namespace std;


class Sofa {
private:
	int weight;

public :
	int getWeight() {
		return this->weight;
	}

	void sleep() {
		cout<<"sleep"<<endl;
	}

};

class Bed {
private:
	int weight;

public :
	int getWeight() {
		return this->weight;
	}

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

	/* err: 两个类中都有weight */
	//s.getWeight();

	return 0;
}
