#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    for (auto it = v5.cbegin(); it != v5.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}