#include "MyIncludes.hpp"

// [����] "����.cpp"�� �ִ� �ҹ��ڸ� ��� �빮�ڷ� �ٲپ� ������ ���� "�빮��.cpp"�� ������.

int main()
{
	ifstream in{ "250901.cpp" };
	ofstream out{ "�빮��.cpp" };
	char c;
	/*while (in.get(c)) {
		out << (char)toupper(c);
	}*/								// �� �ڵ�
	//������ �ڵ�
	in >> noskipws;
	while (in >> c) {
		c = toupper(c);
		out << c;
		//out << (char)toupper(c);
	}
}