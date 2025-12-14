#include "MyIncludes.hpp"

int main()
{
	ofstream out{ "ภฺทแต้.txt" };

	int cnt{};

	for (int i = 0; i < 77; ++i) {
		cnt = rand() % 20;
		out << cnt << '\t';
		for (int j = 0; j < cnt; ++j) {
			out << rand() % 10000 << '\t';
		}
	}
}