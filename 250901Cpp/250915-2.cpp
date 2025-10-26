//3��1����
#include <iostream>
#include <random>
#include <print>
#include <algorithm>
#include <array>
#include "save.h"

// [����] int�� 1000���� ������ �޸𸮸� �غ��Ѵ�.
// �� int���� random(������, ���ڴ��) assign�Ѵ�.
// ���� ū ���� �������� ã�� ȭ�鿡 ����϶�.

std::default_random_engine dre{std::random_device()()};
std::uniform_int_distribution uid{ 1,100000 };

//-----------------
int main()
//-----------------
{
	//int n[1000]{};  // << �̷��� �ؾ���. �������� �̷��� �Ͻ�.
	std::array<int, 1000> n;

	// int maxValue = 0;
	// int maxValue = 0x80'00'00'00;
	int maxValue = std::numeric_limits<int>::min();

	for (int i = 0; i < 1000; ++i) {
		n[i] = uid(dre);
	}

	std::cout << "�� 1000�� ��� ���" << '\n';

	for (const int& num : n) {
		std::print("{:10}", num);
		if (num > maxValue)
			maxValue = num;
	}

	std::cout << '\n';
	std::cout << "���� ū ����? : " << maxValue << std::endl;
	std::cout << "���� ū ����? : "<< *std::max_element(n.begin(), n.end()) << '\n';

	// ���� ū ���� ã�� ȭ�鿡 ����϶�. - 9990'8038
	// ��� ���� �ݵ�� �� ���� ���غ��� �Ѵ�. O(N)
	// 99995876

	//save("250915-2.cpp");
}



