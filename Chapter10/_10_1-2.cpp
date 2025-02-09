#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums;
    int count_val = 1;
    auto result = count(nums.begin(), nums.end(), count_val);

    list<string> strList;
    string count_Sval = "man";
    auto result = count(strList.begin(), strList.end(), count_Sval);

    return 0;
}