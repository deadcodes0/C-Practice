#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
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

    stable_sort(vec.begin(), vec.end(), isShorter);
    cout << "after stable_sort: ";
    for (auto elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;
}
int main()
{
    vector<string> vec { "man", "what", "man", 
        "can", "what", "can", "i", "say", "i", "say" };

    elimDups(vec);
    return 0;
}