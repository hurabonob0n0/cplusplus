#include "MyIncludes.hpp"

uniform_int_distribution uid{ 0,9999'9999 };
default_random_engine dre;

long long NUM = 1000000;

int main()
{
	ofstream out{ "몇개인지모르는int값들",ios::binary };

	vector<int> Nums(NUM);
	
	for (auto& num : Nums) {
		num = uid(dre);
	}

	out.write((const char*)Nums.data(), NUM * sizeof(int));
}