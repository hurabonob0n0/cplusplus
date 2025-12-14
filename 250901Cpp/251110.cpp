#include "STRING.h"

int main()
{
	STRING s[]{ "333","22","55555","1","4444" };

	//[문제] s를 길이기준 오름차순으로 정렬하라.
	std::sort(s, s + std::size(s), [](const STRING& a, const STRING& b) {
		return a.length() < b.length();
		});



	for (const STRING& s : s)
		cout << s << endl;
}