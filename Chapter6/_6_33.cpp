#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> nums, unsigned index)
{
    unsigned sz = nums.size();
    if (index < sz)
    {
        cout << nums[index] << " ";
        print(nums, index + 1);
    }
}
int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,8,9};
    unsigned index = 0;
    print(nums, index);
    return 0;
}