//3��1����
#include <iostream>
#include "save.h"

//���� ���� ������ �ڷ����� ���� ��ü�� �ʿ��ϴ�

//-----------------
int main()
//-----------------
{
	int n[40]{};				// {}�� initializer list �̴�.
								// list�� �ƹ� ���� ���ٸ� �ڷ����� default������ �ʱ�ȭ�Ѵ�.
								// fundamental data type�� default���� ��� bit�� 0���� �ʱ�ȭ�ϴ� ���̴�.

	int a{};					// �� ������ �ʱ�ȭ(initialization)��.
								// �ʱ�ȭ : ��ü�� ����鼭 �� �ѹ� �����ϴ� ����.
	int b = 3;					// �� ���嵵 �ʱ�ȭ��.

	b = 3;
	b = 333;
	b = 33333;					// ��״� ����,�Ҵ�,��(assignment)�̴�.

	//���� ȭ�鿡 ����� ����.

	for (auto& nums : n) {
		//std::cout << std::addressof(nums)<< '\n';
		std::cout << nums << "  ";
	}

	std::cout << std::endl << "��";

	//save("250915-1.cpp");
}