#include "MyIncludes.hpp"

uniform_int_distribution uid{ 0,9999'9999 };
default_random_engine dre;

long long NUM = 1000000;

int main()
{
	ofstream out{ "������𸣴�int����.txt"};

	vector<int> Nums(NUM);

	for (long long i = 0; i < NUM; ++i) {
		out << uid(dre) << ' ';
	}
}