#include "MyIncludes.hpp"

//[����] pangram�� ����� ���ڸ� ������������ �����ϰ� ȭ�� ����϶�.
char pangram[]{ "The quick brown fox jumps over the lazy dog" };

int Ascending(const void*, const void*);

int Ascending(const void* a, const void* b)
{
	return *(const char*)a - *(const char*)b;
}

//--------------------
int main()
//--------------------
{
	/*string spangram{ pangram };
	cout << spangram << endl;
	sort(spangram.begin(), spangram.end());
	cout << spangram << endl;*/

	//print("{}\n", pangram);

	/*qsort(pangram, sizeof(pangram) - 1, sizeof(char), [](const void* a, const void* b)
		{
			return *(const char*)a - *(const char*)b;
		});*/

		//print("{}", pangram);

	
	cout << pangram << endl;

	qsort(pangram, sizeof(pangram) - 1, sizeof(char), Ascending);

	cout << pangram << endl;

}