#include "MyIncludes.hpp"


int main()
{
	//[문제] "처음만든파일.txt"에는 몇 개인지 모르는 int가 저장되어 있다.
	// 읽어서 화면에 출력하라.

	ifstream in{ "처음만든파일.txt" }; // 이 동작은 성공할 수도 있고 실패할 수도 있어서 반드시 검사해야한다.
	
	if (!in) { // 실패했을 경우
		cout << "파일을 열 수 없습니다." << endl;
		return 20251015;
	}

	// 이제 in을 사용해서 파일에 있는 자료를 읽어올 수 있다.

	int num;					// STACK에 있는 메모리
	while (in >> num) {	
		print("{:8}", num);
	}
	

}