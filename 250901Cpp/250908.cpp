// 2�� 1��
// ������ ȯ�� - ���� 17.14.13(August 2025)
// Release/ x64
// SDL �˻� �ƴϿ�
// �̸����� - std:c++latest

#include "save.h"

#include <iostream>
#include <print>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;

//[����] ������ ��ü�� �������
// �� ���� �������.
// 2 x 1 = 2
// �ܰ� ���� �� �� ���� �����϶�.

int main()
{
	cout << "--------������ ���--------" << endl;
	cout << "===============��===============" << endl;
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
	
	cout << "===============������===============" << endl;
	for (int dan = 2; dan <= 9; ++dan) {
		for (int i = 1; i <= 9; ++i) {
			println("{} x {} = {2d}", dan, i, dan * i);
		}
		cout << endl;
	}

	save("250908.cpp");
}