#include "MyIncludes.hpp"

// [문제] "메인.cpp"에 있는 소문자를 모두 대문자로 바꾸어 저장한 파일 "대문자.cpp"를 만들어라.

int main()
{
	ifstream in{ "250901.cpp" };
	ofstream out{ "대문자.cpp" };
	char c;
	/*while (in.get(c)) {
		out << (char)toupper(c);
	}*/								// 내 코드
	//교수님 코드
	in >> noskipws;
	while (in >> c) {
		c = toupper(c);
		out << c;
		//out << (char)toupper(c);
	}
}