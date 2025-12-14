#include <iostream>
using namespace std;

int main()
{
	//[문제] a와 r의 정체를 밝혀주세요.

	int a{ 1 };

	int& r{ a };
	r = 20250929;

	cout << "r의 타입 :" << typeid(r).name() << ", a의 타입 :" << typeid(a).name() << endl;
	cout << "r의 사이즈 :" << sizeof(r) << ", a의 사이즈 :" << sizeof(a) << endl;
	cout << "r의 주소 :" << &r << ", a의 주소 :" << &a << endl;


}