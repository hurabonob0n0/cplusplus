#include <iostream>
using namespace std;

int main()
{
	//[����] a�� r�� ��ü�� �����ּ���.

	int a{ 1 };

	int& r{ a };
	r = 20250929;

	cout << "r�� Ÿ�� :" << typeid(r).name() << ", a�� Ÿ�� :" << typeid(a).name() << endl;
	cout << "r�� ������ :" << sizeof(r) << ", a�� ������ :" << sizeof(a) << endl;
	cout << "r�� �ּ� :" << &r << ", a�� �ּ� :" << &a << endl;


}