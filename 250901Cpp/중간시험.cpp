#include <iostream>
#include <fstream>   // 파일 입출력(ifstream)을 위해
#include <iomanip>   // 소수점 자리수(setprecision, fixed)를 위해
#include <print>

using namespace std;

int main() 
{
	ifstream in{ "월56.txt" };
	long long nums{};
	int num{};
	long long sum{};
	int* p;
	int temp{};

	while (in >> num) {
		nums += num;
		for (int i = 0; i < num; ++i){
			in >> temp;
			sum += temp;
			//p = new int[num];
		}
	}

	cout << "평균 : " << sum / nums << endl;
	cout << "마지막 숫자 : " << temp;
}
