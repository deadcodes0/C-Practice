#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    vector<int> nums;
    while (cin >> num)
        nums.push_back(num);
    
    // vector<int> adjsum;
    // for (decltype(nums.size()) i = 0; i < nums.size() - 1; i++) 
    // {   
    //     adjsum.push_back(nums[i] + nums[i + 1]);
    // }
    // for (auto elem : adjsum)
    //     cout << elem << " ";
    // cout << endl;

    vector<int> symsum;
    auto left = nums.begin(), right = nums.end() - 1;
    while (left < right)
    {
        symsum.push_back(*left + *right);
        left++, right--;
    }
    for (auto elem : symsum)
        cout << elem << " ";
    if (nums.size() % 2 != 0)
        cout << nums[nums.size() / 2];
    cout << endl;
    return 0;
}