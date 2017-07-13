#include <iostream>

using namespace std;

class Father {
private:
	int money;

protected:
	int room_key;

public :
	int getMoney() {
		return money;	
	}

	void setMoney(int money) {
		this->money = money;
	}

	void printInfo() {
		cout<<"money = "<<money<<endl;
	}
};

class Son : public Father {
private:
	int num;

public :
	/* 可以通过using将父类的可见属性重新声明 */
	using Father :: room_key;

	void playGame() {
		cout<<"play games!"<<endl;
	}
};

int main() {
	Son s;

	s.setMoney(10);
	s.printInfo();

	s.room_key = 1;	
}
