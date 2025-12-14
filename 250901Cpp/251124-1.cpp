#include "STRING.h"
default_random_engine dre;
uniform_int_distribution uidId{ 1,100000 };
uniform_int_distribution uidlen{ 10,50 };
uniform_int_distribution<int> uidChar{ 'a','z' };

// [문제] main이 의도대로 실행되도록 class Dog를 coding 하라
// class Dog는
class Dog {
public:
	Dog() {
		id = uidId(dre);

		int len = uidlen(dre);

		char* p = new char[len+1];

		for (int i = 0; i < len; ++i)
			p[i] = uidChar(dre);
		p[len] = '\0';

		STRING temp(p);
		delete[] p;
		//name = temp;
		name = move(temp);
	}

public:
	friend ostream& operator <<(ostream& os, const Dog& dog) {
		//print(os,"[{:6}] - ", dog.id);
		//os << dog.name;
		//return os;
		os << dog.id << "  " << dog.name;
		return os;
	}

public:
	bool operator<(const Dog& other) const {
		return this->getNameLen() < other.getNameLen();
	}

public:
	int getNameLen() const {
		return name.length();
	}

private:
	int			id;		// 생성시 [1,100000] 사이의 랜덤값으로 설정
	STRING		name;	// 생성시 [10,50] 랜덤길이로 설정하고, 글자는 임의의 소문자로 설정
};

int 길이오름(const void* a, const void* b) 
{
	return ((Dog*)a)->getNameLen() - ((Dog*)b)->getNameLen();
}

// [실습] 파일 "개들.txt"에 Dog 객체를 1000개 기록한다.

int main()
{
	ofstream out{ "개들.txt" };

	for (int i = 0; i < 1000; ++i) {
		Dog dog;
		out << dog << endl;
	}

	//Dog dogs[10];

	// [문제] 길이오름차순으로 정렬하라.
	//qsort(dogs, 10, sizeof(Dog), 길이오름);
	//std::sort(std::begin(dogs), std::end(dogs));

	//for (const Dog& dog : dogs)
	//	cout << dog << endl;		//화면에 [ID는 6칸] - name
}