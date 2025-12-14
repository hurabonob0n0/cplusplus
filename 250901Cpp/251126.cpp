#include "STRING.h"

// [문제] 다운받은 파일 "개들.txt" 에는 1000개의 Dog 객체가 있다.
// class Dog의 멤버는 다음과 같다. 
// 파일에 있는 Dog 객체를 메모리에 전부 저장하라.
// id 기준 오름차순으로 정렬하라.
// 화면에 id와 name을 출력하라.

class Dog {
	// 무의미한 생성자 만들 필요가 없다.
private:
	int				id;
	STRING		    name;

public:
	int length() const { return id; }
	STRING get_name() const { return name; }

	friend istream& operator>>(istream& is, Dog& dog) {
		return is >> dog.id >> dog.name;
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << "아이디 - " << dog.id << ", 이름 - " << dog.name;
	}
};

int cnt{};

int main()
{
	ifstream in("개들.txt");

	if (!in)
		return 20291810810801;

	Dog dog[1000]; //40'000 40kb 스택에서 메가바이트정도까지 가능하기 때문에 스택에 만들어도 된다.

	for (int i = 0; i < 1000; ++i) {
		in >> dog[i];
	}

	

	qsort(dog, 1000, sizeof(Dog), [](const void* a, const void* b) {
		++cnt;
		return ((Dog*)(a))->length() - ((Dog*)(b))->length();
		//return ((Dog*)(a))->get_name().compare(((Dog*)(b))->get_name());
		}); // 시험 때는 람다 쓰지 않기 

	for (int i = 0; i < 1000; ++i) {
		cout << dog[i] << endl;
	}

	cout << "함수호출횟수 : " << cnt;

}