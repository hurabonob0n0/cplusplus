#include "MyIncludes.hpp"

using namespace std;

constexpr int NUM = 10;

void change(int&, int&);

int main()
{
	int num[NUM];
	for (auto& i : num) {
		i = uid(dre);
	}
	
	for (int i = 0; i < NUM; ++i) {
		cout << i << "번째 : " << num[i] << endl;
	}

	for (int i = 0; i < NUM - 1; ++i) {
		for (int j = 0; j < NUM - 1 - i; ++j) {
			change(num[j], num[j + 1]);
		}
	}

	cout << " ------------------------------- " << endl;

	for (int i = 0; i < NUM; ++i) {
		cout << i << "번째 : " << num[i] << endl;
	}

}

void change(int& a, int& b)
{
	if (a < b)
		return;

	int c = a;
	a = b;
	b = c;
}
