#include "MyIncludes.hpp"

//------------
int main()
//------------
{
    while(true)
    {
        int cnt;
        cout << "�޸� �� ���� �ʿ��ϽŰ���? : ";
        cin >> cnt;

        int* numbers = new int[cnt];

        for (int i = 0; i < cnt; ++i) {
            numbers[i] = i + 1;
        }

        int sum{ 0 };

        for (int i = 0; i < cnt; ++i) {
            sum += numbers[i];
        }

        cout << "��� ���� ���� ����� : " << sum << endl;

        //cout << "��� ���� ���� ����� : " << accumulate(numbers, numbers + cnt, 0LL) << endl;

        delete[] numbers;
        numbers = nullptr;
    }
}