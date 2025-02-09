#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums;

    cout << nums.at(0) << endl;
    cout << *(nums.begin()) << endl;
    cout << nums.front() << endl;
    cout << nums[0] << endl;
    return 0;
}