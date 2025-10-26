//3주1일차
#include <iostream>
#include "save.h"

//많은 수의 동일한 자료형을 갖는 객체가 필요하다

//-----------------
int main()
//-----------------
{
	int n[40]{};				// {}는 initializer list 이다.
								// list에 아무 값이 없다면 자료형의 default값으로 초기화한다.
								// fundamental data type의 default값은 모든 bit를 0으로 초기화하는 것이다.

	int a{};					// 이 문장은 초기화(initialization)다.
								// 초기화 : 객체를 만들면서 단 한번 설정하는 동작.
	int b = 3;					// 이 문장도 초기화다.

	b = 3;
	b = 333;
	b = 33333;					// 얘네는 대입,할당,배(assignment)이다.

	//값을 화면에 출력해 보라.

	for (auto& nums : n) {
		//std::cout << std::addressof(nums)<< '\n';
		std::cout << nums << "  ";
	}

	std::cout << std::endl << "끝";

	//save("250915-1.cpp");
}