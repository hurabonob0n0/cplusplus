// 1�� 1��
// ������ ȯ�� - ���� 17.14.13(AUGUST 2025)
// RELEASE/ X64
// SDL �˻� �ƴϿ�
// �̸����� - STD:C++LATEST

#INCLUDE <IOSTREAM>
#INCLUDE <THREAD>
#INCLUDE <CHRONO>
#INCLUDE <FSTREAM>
USING NAMESPACE STD;

INT MAIN()
{
	/*FOR (CHAR I = 0; ; ++I) {
		STD::COUT << I << " - �ȳ�. �ݰ���" << '\N';
		STD::THIS_THREAD::SLEEP_FOR(100MS);
	}*/

	// ����.CPP�� ������ �о� ���Ͽ� ����ҰŴ�.
	IFSTREAM IN{ "250901.CPP" };
	IN >> NOSKIPWS;

	CHAR C;

	WHILE (IN >> C)
		COUT << C;
}