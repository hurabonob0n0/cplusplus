#include "MyIncludes.hpp"

// [����] � ������ �� �ܾ��
// ���� �� ���� �ܾ����� �˾Ҵ�.
// �� �ܾ���� �޸𸮿� ��� �����ϸ� qsort�� �� �ִ�.
// ������������ �����ؼ� ����϶�.

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

	// ���ĵ� �ܾ���� ����մϴ�.
	for (const auto& s : str) {
		cout << s << '\t';
	}
}