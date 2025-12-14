#include "MyIncludes.hpp"

//[문제] "몇개인지모르는int"에 int가 저장되어 있다.
// 모두 몇 개인지 출력하라.
// 가장 큰 값을 찾아 화면에 출력하라.
// 가장 작은 값을 찾아라

int main()
{
	ifstream in{ "몇개인지모르는int값들" ,ios::binary};

    in.seekg(0, std::ios::end);      
    long long file_size = in.tellg();
    in.seekg(0, std::ios::beg);      

    long long num_count = file_size / sizeof(int);

    vector<int> nums(num_count);
    
    in.read((char*)nums.data(), sizeof(int) * num_count);

    
    cout << "최댓값 : " << *max_element(nums.begin(), nums.end()) << "  최솟값 : " << *min_element(nums.begin(), nums.end()) << "  개수 : " << num_count;
}