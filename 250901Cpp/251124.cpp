#include "STRING.h"

class Dog {
public:
	bool operator() (const STRING& a, const STRING& b) {
		return a.length() < b.length();
	}
};

int main()
{
	STRING s[]{ "333","22","55555","1","4444" };

	Dog dog;
	//sort(begin(s), end(s), dog);
	cout << boolalpha << dog(s[0], s[1]) << endl;
	

	for (const STRING& s : s)
		cout << s << endl;
}