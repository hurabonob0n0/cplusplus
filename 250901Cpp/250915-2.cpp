//3주1일차
#include <iostream>
#include <random>
#include <print>
#include <algorithm>
#include <array>
#include "save.h"

// [문제] int값 1000개를 저장할 메모리를 준비한다.
// 각 int값을 random(임의의, 제멋대로) assign한다.
// 가장 큰 값이 무엇인지 찾아 화면에 출력하라.

std::default_random_engine dre{std::random_device()()};
std::uniform_int_distribution uid{ 1,100000 };

//-----------------
int main()
//-----------------
{
	//int n[1000]{};  // << 이렇게 해야함. 교수님이 이렇게 하심.
	std::array<int, 1000> n;

	// int maxValue = 0;
	// int maxValue = 0x80'00'00'00;
	int maxValue = std::numeric_limits<int>::min();

	for (int i = 0; i < 1000; ++i) {
		n[i] = uid(dre);
	}

	std::cout << "값 1000개 모두 출력" << '\n';

	for (const int& num : n) {
		std::print("{:10}", num);
		if (num > maxValue)
			maxValue = num;
	}

	std::cout << '\n';
	std::cout << "가장 큰 값은? : " << maxValue << std::endl;
	std::cout << "가장 큰 값은? : "<< *std::max_element(n.begin(), n.end()) << '\n';

	// 가장 큰 값을 찾아 화면에 출력하라. - 9990'8038
	// 모든 값을 반드시 한 번은 비교해봐야 한다. O(N)
	// 99995876

	//save("250915-2.cpp");
}



