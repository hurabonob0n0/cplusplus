// 2�� 1��
#include <iostream>
#include <print>
#include <bitset>
#include <numeric>
#include "save.h"
using namespace std;

//[�ǽ�] int �� 2���� �Է¹޾� �̰��� ���� ����� ���ִ� �Լ�
// add�� �ۼ��Ͽ� ����� ����϶�.

int add(int a, int b);

int main()
{
	float num = 1024.333;
	char* p = ((char*)(&num));

	for (int i = 0; i < 4; ++i)
	{
		cout << bitset<8>(p[i]);
	}
	//save("250908-2.cpp");
}

int add(int a, int b)
{
	return a + b;
}
