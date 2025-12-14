#include "MyIncludes.hpp"

//[문제] "몇개인지모르는int"에 int가 1000000개 저장되어 있다.
// 오름차순으로 정렬하고 20칸마다 핸 개씩 모두 출력하라.

constexpr long long NUM = 1000000;

int main()
{
    ifstream in{ "몇개인지모르는int값들.txt" };
    if (!in)
        cout << "파일 열기 실패";

    int* nums = new int[NUM];

    //in.read((char*)(nums), sizeof(int) * NUM);     //이거는 bin형식일 때만 가능하구나

    for (long long i = 0; i < NUM; ++i) {
        in >> nums[i];
    }

    qsort(nums, NUM, sizeof(int), [](const void* a, const void* b) {
        return *(const int*)a - *(const int*)b;
        });

    for (int i = NUM*99/100; i < NUM; ++i) {
        print("{:20}", nums[i]);
    }

    cout << '\n' << "최댓값 : " << *max_element(nums, nums + NUM);

    delete[] nums;
    nums = nullptr;
}