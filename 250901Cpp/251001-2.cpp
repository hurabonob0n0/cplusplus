#include "MyIncludes.hpp"

//------------
int main()
//------------
{
    while(true)
    {
        int cnt;
        cout << "메모리 몇 개가 필요하신가요? : ";
        cin >> cnt;

        int* numbers = new int[cnt];

        for (int i = 0; i < cnt; ++i) {
            numbers[i] = i + 1;
        }

        int sum{ 0 };

        for (int i = 0; i < cnt; ++i) {
            sum += numbers[i];
        }

        cout << "모든 값을 더한 결과는 : " << sum << endl;

        //cout << "모든 값을 더한 결과는 : " << accumulate(numbers, numbers + cnt, 0LL) << endl;

        delete[] numbers;
        numbers = nullptr;
    }
}