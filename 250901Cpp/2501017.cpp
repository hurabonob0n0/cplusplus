#include "MyIncludes.hpp"

//[문제] 사용자가 원하는 소문자를 입력받아라.
// 파일 "2025 2학기 C++ 강의저장.txt"에 몇 개나 저장되어 있나 출력하라.
// 이 과정을 영원히 반복하라.

int main()
{
	while (true) {
		char c;
		cout << "알파벳을 입력하시오 : ";
		cin >> c;
		ifstream in{ "2025 2학기 C++ 강의저장.txt" };
		char alpha;
		int alphanums{};
		while (in >> alpha) {
			if (alpha == c)
				++alphanums;
		}
		cout << "알파벳 " << c << "는 " << alphanums << "개 있습니다." << endl;
	}
	

}