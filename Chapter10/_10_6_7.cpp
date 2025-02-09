#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<string>
#include<numeric>
#include<algorithm>
using namespace std;
//10.9
void elimDups(vector<string> &vec)
{
    sort(vec.begin(), vec.end());
    cout << "after sorted: ";
    for (auto elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;

    auto uni = unique(vec.begin(), vec.end());
    cout << "after unique: ";
    for (auto elem : vec)
    {
        cout  << elem << " ";
    }
    cout << endl;

    vec.erase(uni, vec.end());
    cout << "after erase: ";
    for (auto elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int>arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // fill_n(begin(arr), arr.size(), 0);

    // auto beg = begin(arr);
    // while (beg != end(arr))
    // {
    //     cout << *beg << " ";
    //     ++beg;
    // }
    // cout << endl;

    //10.7
    // vector<int> vec;
    // vec.reserve(10);
    // fill_n(back_inserter(vec), 10, 9);
    // for (auto elem : vec) cout << elem << " ";
    // cout << endl;

    //10.9
    vector<string> vec { "man", "what", "man", 
        "can", "what", "can", "i", "say", "i", "say" };

    elimDups(vec);
    return 0;
}