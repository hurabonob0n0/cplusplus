#include "MyIncludes.hpp"

//[����] ����ڰ� ���ϴ� �ҹ��ڸ� �Է¹޾ƶ�.
// ���� "2025 2�б� C++ ��������.txt"�� �� ���� ����Ǿ� �ֳ� ����϶�.
// �� ������ ������ �ݺ��϶�.

int main()
{
	while (true) {
		char c;
		cout << "���ĺ��� �Է��Ͻÿ� : ";
		cin >> c;
		ifstream in{ "2025 2�б� C++ ��������.txt" };
		char alpha;
		int alphanums{};
		while (in >> alpha) {
			if (alpha == c)
				++alphanums;
		}
		cout << "���ĺ� " << c << "�� " << alphanums << "�� �ֽ��ϴ�." << endl;
	}
	

}