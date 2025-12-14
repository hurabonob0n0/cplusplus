#include "STRING.h"

// [문제] 다운받은 파일 "개들.txt" 에는 1000개의 Dog 객체가 있다.
// class Dog의 멤버는 다음과 같다. 
// 파일에 있는 Dog 객체를 메모리에 전부 저장하라.
// id 기준 오름차순으로 정렬하라.
// 화면에 id와 name을 출력하라.

class Dog {
private:
	int				id;
	std::string		name;
};

int main()
{
	ifstream in("개들.txt");

	if (!in)
		return 20291810810801;

	long long cnt;
	int id;
	string name;

	while (in >> id >> name) {
		cout << id << " ------- " << name << endl;
		++cnt;
	}

	cout << "모두 " << cnt << "개의 데이타";
}