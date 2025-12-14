// 2주 1일
#include <iostream>
#include <print>
#include <bitset>
#include <numeric>
#include "save.h"
using namespace std;

//[실습] int 값 2개를 입력받아 이것을 더한 결과를 내주는 함수
// add를 작성하여 결과를 출력하라.

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
