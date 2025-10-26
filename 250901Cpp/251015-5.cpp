#include "MyIncludes.hpp"

//[����] "������𸣴�int"�� int�� 1000000�� ����Ǿ� �ִ�.
// ������������ �����ϰ� 20ĭ���� �� ���� ��� ����϶�.

constexpr long long NUM = 1000000;

int main()
{
    ifstream in{ "������𸣴�int����.txt" };
    if (!in)
        cout << "���� ���� ����";

    int* nums = new int[NUM];

    //in.read((char*)(nums), sizeof(int) * NUM);     //�̰Ŵ� bin������ ���� �����ϱ���

    for (long long i = 0; i < NUM; ++i) {
        in >> nums[i];
    }

    qsort(nums, NUM, sizeof(int), [](const void* a, const void* b) {
        return *(const int*)a - *(const int*)b;
        });

    for (int i = NUM*99/100; i < NUM; ++i) {
        print("{:20}", nums[i]);
    }

    cout << '\n' << "�ִ� : " << *max_element(nums, nums + NUM);

    delete[] nums;
    nums = nullptr;
}