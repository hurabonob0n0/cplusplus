// 2주 1일
// 컴파일 환경 - 버전 17.14.13(August 2025)
// Release/ x64
// SDL 검사 아니오
// 미리보기 - std:c++latest

#include "save.h"

#include <iostream>
#include <print>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;

//[문제] 구구단 전체를 출력하자
// 줄 맞춰 출력하자.
// 2 x 1 = 2
// 단과 단은 한 줄 떼서 구분하라.

int main()
{
	cout << "--------구구단 출력--------" << endl;
	cout << "===============나===============" << endl;
	{
		for (int dan = 2; dan <= 9; ++dan) {
			for (int i = 1; i <= 9; ++i) {
				if (dan * i < 10)
					std::cout << dan << " x " << i << " =  " << dan * i << '\n';
				else
					std::cout << dan << " x " << i << " = " << dan * i << '\n';
			}
			cout << endl;
		}
	}
	
	cout << "===============교수님===============" << endl;
	for (int dan = 2; dan <= 9; ++dan) {
		for (int i = 1; i <= 9; ++i) {
			println("{} x {} = {2d}", dan, i, dan * i);
		}
		cout << endl;
	}

	save("250908.cpp");
}