// 2주 1일
#include <iostream>
#include "save.h"
using namespace std;

//[실습] int 값 2개를 입력받아 이것을 더한 결과를 내주는 함수
// add를 작성하여 결과를 출력하라.

// 함수란 무엇인가? - subroutine, 코드 재활용, 함수의 prototype(원형), 선언과 정의
// module

int add(int, int);

// 함수 정의  - function definition - 메모리를 차지하는 코드

int main()
{
	int a, b;

	while (true)
	{
		std::cout << "int 2개를 입력받아 합계를 계산하겠습니다" << endl;
		std::cout << "int 2개를 입력하시오 : ";

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
