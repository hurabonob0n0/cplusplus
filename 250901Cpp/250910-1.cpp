// 2�� 1��
#include <iostream>
#include "save.h"
using namespace std;

//[�ǽ�] int �� 2���� �Է¹޾� �̰��� ���� ����� ���ִ� �Լ�
// add�� �ۼ��Ͽ� ����� ����϶�.

// �Լ��� �����ΰ�? - subroutine, �ڵ� ��Ȱ��, �Լ��� prototype(����), ����� ����
// module

int add(int, int);

// �Լ� ����  - function definition - �޸𸮸� �����ϴ� �ڵ�

int main()
{
	int a, b;

	while (true)
	{
		std::cout << "int 2���� �Է¹޾� �հ踦 ����ϰڽ��ϴ�" << endl;
		std::cout << "int 2���� �Է��Ͻÿ� : ";

		std::cin >> a >> b;

		//cout << &a << '\t' << &b << endl;

		std::cout << a << " + " << b << " = " << add(a,b) << '\n';
	}
	save("250910-1.cpp");
}

int add(int a, int b)
{
	return a + b;
}
