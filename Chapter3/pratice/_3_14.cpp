#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> nums;
    int num;
    while (cin >> num)
        nums.push_back(num);
    for (auto num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}