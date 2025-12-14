#include "MyIncludes.hpp"

class Dog {
	// 추상화, 캡슐화, 정보은닉(information hiding)
public:
	Dog() {
		name = "댕댕이";
		cout << name << " 생성자를 호출했다." << endl;
	}
	Dog(const string& name) : name{ name } {
		cout << name << " 대입 생성자 호출했다." << endl;
	}
	~Dog() { cout << name << " 소멸자 호출" << endl; }

public:
	void bark() { cout << name << "다. 멍!" << endl; }

private: // 기본 access modifier
	string name;

};

int main()
{
	cout << "----------메인 시작----------" << endl;

	Dog dog[3]{ "코코","보리","초코" };

	cout << "----------메인 끝나기 직전----------" << endl;
}