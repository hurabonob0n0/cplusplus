#include "STRING.h"

class Animal{
public:
	virtual void move() = 0;

private:
	int id = 0;

public:
	virtual ~Animal() { cout << "Animal 소멸자 호출" << endl; }
};

class Dog : public Animal {
public:
	void move() {
		cout << "개 달린다." << endl;
	}

private:
	int num1;

public:
	virtual ~Dog() { cout << "Dog 소멸자 호출" << endl; }
};

class Bird : public Animal{
public:
	void move() {
		cout << "새 난다." << endl;
	}

private:
	int num1;
	int num2;

public:
	virtual ~Bird() { cout << "Bird 소멸자 호출" << endl; }
};

// 문제 동물농장을 운영하고 있다.
// 내 농장에는 다수의 Dog와 Bird가 있다.
// 한 번의 명령으로 내 농장에 있는 동물들에게 원하는 일을 하고 싶다.

int main()
{
	Animal* Animals[10];
	for (auto& Animal : Animals) {
		if (rand() % 2 == 0)
			Animal = new Dog();
		else
			Animal = new Bird();
	}

	for (auto& anim : Animals) {
		if(anim)
			anim->move();
	}

	for (auto& anim : Animals) {
		if (anim) {
			delete anim;
			anim = nullptr;
		}
	}
}