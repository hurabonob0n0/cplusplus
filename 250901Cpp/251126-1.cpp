#include "STRING.h"

// 상속하는 이유 :	1. 코드 재사용
//					2. 다형성 (polymorphism) 구현

class Animal {
public:
	Animal() = default;
	Animal(const char* name) : name{ name } {}

public:
	void move() {}

	void show() const { cout << "내 이름은 : " << name << "이다"; }

protected:
	string name;
};

class Dog : public Animal {
public:
	Dog() { this->name = "코코"; }
	//Dog (const char* name) { this->name = name; }
	Dog(const char* name) : Animal(name) {}
	Dog(const char* name, int speed) : Animal(name) { this->speed = speed; }

public:
	void show() const { cout << "내 이름은 : " << name << "이고, " << "스피드는 : " << speed << "이다."; }

private:
	int speed;
};

class StarString : public string {
public:
	StarString(const string& s) {
		assign(s);
	}

	friend ostream& operator << (ostream& os, const StarString& ss) {
		for (int i = 0; i < ss.size(); ++i) {
			if (isdigit(ss[i]))
				os << '*';
			else
				os << ss[i];
		}
		return os;
	}
};

//---------
int main()
//---------
{
	string str{ "2025년 11월 26일 - 상속 시작" };

	StarString ss = str;

	// 출력할 때 숫자를 '*'로 바꿔서 출력하고 싶다.
	cout << ss << endl;

	Dog dog{ "코코",100 };

	dog.show();

	cout << endl;
}