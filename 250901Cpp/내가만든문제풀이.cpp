#include "MyIncludes.hpp"

//[문제 1] 
// 자료들.txt 파일에는 몇 개인지 모르는 자료들이 들어있다
// 자료들은 int값으로 이루어져 있고 첫 번째 int값은 자료의 개수를 나타낸다.
// 자료의 개수만큼의 int형 정보들이 저장되어있다.
// 예시) 5 100 234 7 3 99		1 13		2 7 9 ...
// 자료 묶음의 개수를 구하라

//[문제 2]
// 자료들 중에서 가장 많은 정보를 가지고 있는 것의 개수는 몇 개인가

//[문제 3]
// 전체 자료들 중 자료의 개수를 나타내는 값을 제외하고 가장 큰 값을 구하여라

//[문제 4]
//모든 정보들을 정렬하여라

//[문제 5]
//각각의 정보 묶음들을 정렬하여라

int Ascending(const void* A, const void* B)
{
	return *(const int*)A - *(const int*)B;
}

int main()
{
	ifstream in{ "자료들.txt" };
	if (!in) {
		return 2019180008;
	}

	// 총 77개

	int num;
	int maxcnt{};
	int maxval{};
	int nums{};
	int cnt{};
	int* p = new int[830];

	while (in >> num) {
		if (maxcnt < num)
			maxcnt = num;
		nums += num;
		for (int i = 0; i < num; ++i) {
			int temp;
			in >> temp;
			if (maxval< temp)
				maxval= temp;
			p[cnt++] = temp;
		}
	}

	cout << maxcnt << " - 최대개수" << endl;

	cout << maxval << " - 최댓값" << endl;

	cout << "모든 자료들의 개수 : " << nums << endl;

	for (int i = 0; i < 830; ++i) {
		print("{:10}", p[i]);
	}

	qsort(p, 830, sizeof(int), Ascending);

	cout << "-------------------정렬----------------------" << endl;

	for (int i = 0; i < 830; ++i) {
		print("{:10}", p[i]);
	}

	delete[] p;
	p = nullptr;
}