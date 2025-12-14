#include "MyIncludes.hpp"

int main()
{
	ifstream in{ "내가만든문제풀이.cpp" };
	if (!in) {
		return 2019180008;
	}
	
	char c{};

	in >> noskipws;

	while (in >> c) {
		cout << (char)toupper(c);
	}

}