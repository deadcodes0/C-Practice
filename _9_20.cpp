#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;
int main()
{
    list<int> nums { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> evens, odds;
    for (auto num : nums)
    {
        if (num % 2 == 0) odds.push_back(num);
        else evens.push_back(num);
    }
    for (auto odd : odds) cout << odd << " ";
    cout << endl;
    for (auto even : evens) cout << even << " ";
    return 0;
}