// 1�� 1��
// ������ ȯ�� - ���� 17.14.13(August 2025)
// Release/ x64
// SDL �˻� �ƴϿ�
// �̸����� - std:c++latest

#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;

int main()
{
	/*for (char i = 0; ; ++i) {
		std::cout << i << " - �ȳ�. �ݰ���" << '\n';
		std::this_thread::sleep_for(100ms);
	}*/

	// ����.cpp�� ������ �о� ���Ͽ� ����ҰŴ�.
	ifstream in{ "250901.cpp" };
	in >> noskipws;

	char c;

	while (in >> c)
		cout << c;
}