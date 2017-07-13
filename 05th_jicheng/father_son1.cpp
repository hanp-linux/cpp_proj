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

class Son_pub : public Father {
public :
	void test() {
//		money = 10;   //err    money == private
		room_key = 1; //ok     room_key == protected
	}

	void playGame() {
		cout<<"play games!"<<endl;
	}
};

class Son_pro : protected Father {
public :
	void test() {
//		money = 10;   // err private
		room_key = 1;
	}

	void playGame() {
		cout<<"play games!"<<endl;
	}
};

class Son_pri : private Father {
public :
	void test() {
	//	money = 10;    //err   money == private
		room_key = 1;
	}

	void playGame() {
		cout<<"play games!"<<endl;
	}
};

int main() {
	Son_pub s1;
	Son_pro s2;
	Son_pri s3;

	//s1.money = 1;      //err private
	//s1.room_key = 2;   //err protected 
	s1.getMoney();

	//s2.money = 1;      //err  private
	//s2.room_key = 2;   //err  protected
	//s2.getMoney();     //err  protected

	//s3.money = 1;      //err private
	//s3.room_key = 2;   //err private
	//s3.getMoney();     //err private
}






























