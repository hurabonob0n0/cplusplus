// 1주 1일
// 컴파일 환경 - 버전 17.14.13(August 2025)
// Release/ x64
// SDL 검사 아니오
// 미리보기 - std:c++latest

#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;

int main()
{
	/*for (char i = 0; ; ++i) {
		std::cout << i << " - 안녕. 반가워" << '\n';
		std::this_thread::sleep_for(100ms);
	}*/

	// 메인.cpp의 내용을 읽어 파일에 기록할거다.
	ifstream in{ "250901.cpp" };
	in >> noskipws;

	char c;

	while (in >> c)
		cout << c;
}