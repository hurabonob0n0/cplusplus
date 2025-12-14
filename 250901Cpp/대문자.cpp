// 1주 1일
// 컴파일 환경 - 버전 17.14.13(AUGUST 2025)
// RELEASE/ X64
// SDL 검사 아니오
// 미리보기 - STD:C++LATEST

#INCLUDE <IOSTREAM>
#INCLUDE <THREAD>
#INCLUDE <CHRONO>
#INCLUDE <FSTREAM>
USING NAMESPACE STD;

INT MAIN()
{
	/*FOR (CHAR I = 0; ; ++I) {
		STD::COUT << I << " - 안녕. 반가워" << '\N';
		STD::THIS_THREAD::SLEEP_FOR(100MS);
	}*/

	// 메인.CPP의 내용을 읽어 파일에 기록할거다.
	IFSTREAM IN{ "250901.CPP" };
	IN >> NOSKIPWS;

	CHAR C;

	WHILE (IN >> C)
		COUT << C;
}