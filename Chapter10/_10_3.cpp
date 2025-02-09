#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<numeric>
using namespace std;
int main()
{
    vector<int> nums { 1, 2, 3, 4, 5, 6, 7, 8 };

    auto result = accumulate(nums.begin(), nums.end(), 0);

    cout << result << endl;
    return 0;
}