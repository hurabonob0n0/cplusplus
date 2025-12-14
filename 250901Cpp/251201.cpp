#include "STRING.h"
default_random_engine dre{};
uniform_int_distribution uid{ 1,100000 };
// 상속하는 이유 :	1. 코드 재사용
//					2. 다형성 (polymorphism) 구현

class Animal {
public:
	Animal() = default;
	Animal(const char* name) : name{ name } {}

public:
	void move() {};

	void show() const { cout << "내 이름은 : " << name << "이다"; }

protected:
	string name;
};

class Dog : public Animal {
public:
	Dog() { this->name = "코코"; speed = uid(dre); }
	//Dog (const char* name) { this->name = name; }
	Dog(const char* name) : Animal(name) {}
	Dog(const char* name, int speed) : Animal(name), speed{ speed } {}

public:
	void show() const { cout << "내 이름은 : " << name << "이고, " << "스피드는 : " << speed << "이다." << endl; }

public:
	int get_speed() const { return speed; }

private:
	int speed;
};

class Bird : public Animal {
public:
	void show() const { cout << "내 이름은 " << name << "이야"; }
};


//---------
int main()
//---------
{
	Bird bird{ "포동" }; //시험문제 bird를 그림으로 그려봐라

	bird.show();
}



