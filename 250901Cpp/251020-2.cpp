#include "MyIncludes.hpp"

// [문제] 어떤 파일이 몇 단어냐
// 이제 몇 개의 단어인지 알았다.
// 이 단어들을 메모리에 모두 저장하면 qsort할 수 있다.
// 오름차순으로 정렬해서 출력하라.

int compare_strings(const void* a, const void* b)
{
	const string* strA = (const string*)a;
	const string* strB = (const string*)b;

	return strA->compare(*strB);
}

int main()
{
	ifstream in{ "250901.cpp" };
	if (!in)
		return 0;

	string str[78];
	int cnt{};
	while (in >> str[cnt]) {
		++cnt;
	}
	//sort(str.begin(), str.end());
	qsort(str, cnt, sizeof(string), compare_strings);

	// 정렬된 단어들을 출력합니다.
	for (const auto& s : str) {
		cout << s << '\t';
	}
}