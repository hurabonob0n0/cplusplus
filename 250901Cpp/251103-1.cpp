#include "MyIncludes.hpp"

class STRING {
public:
	STRING(const char* p) { 
		len = strlen(p); 
		p = new char[len];
		memcpy(this->p, p, len);
	}
	~STRING() { delete p; p = nullptr; }

public:
	const unsigned int length() { return len; }
	void show() { cout << p << endl; }
	friend ostream& operator << (ostream& os, const STRING& s) {
		os << s.p;
		return os;
	}

private:
	unsigned int len;
	char* p{};
};

int main()
{
	STRING s{ "2025년 11월 3 일 9주 1일 - 지금부터 코드를 잘 따라 작성해 주세요." };
	
	cout << "글자 수 : " << s.length() << endl;
	cout << "내용 : " << s << endl; // 이렇게 하면 어려우니까 s.show()로 한다.
	s.show();
}