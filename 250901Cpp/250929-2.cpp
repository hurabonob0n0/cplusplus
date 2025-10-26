#include <iostream>
using namespace std;

void change(int&, int&);
void change(int*, int*);

void change(int& x, int& y)
{
	int temp{ x };
	x = y;
	y = temp;
}

void change(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a{ 1 }, b{ 2 };

	change(&a, &b);

	cout << a << " , " << b;
}