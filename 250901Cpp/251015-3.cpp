#include "MyIncludes.hpp"

//[����] "������𸣴�int"�� int�� ����Ǿ� �ִ�.
// ��� �� ������ ����϶�.
// ���� ū ���� ã�� ȭ�鿡 ����϶�.
// ���� ���� ���� ã�ƶ�

int main()
{
	ifstream in{ "������𸣴�int����" ,ios::binary};

    in.seekg(0, std::ios::end);      
    long long file_size = in.tellg();
    in.seekg(0, std::ios::beg);      

    long long num_count = file_size / sizeof(int);

    vector<int> nums(num_count);
    
    in.read((char*)nums.data(), sizeof(int) * num_count);

    
    cout << "�ִ� : " << *max_element(nums.begin(), nums.end()) << "  �ּڰ� : " << *min_element(nums.begin(), nums.end()) << "  ���� : " << num_count;
}