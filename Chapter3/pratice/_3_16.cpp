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

    vector<string> v8(10);

    cout << "V1";
    for (auto elem : v1)
        cout << elem << endl;
    cout << "V2";
    for (auto elem : v2)
        cout << elem << endl;
    cout << "V3";
    for (auto elem : v3)
        cout << elem << endl;
    cout << "V4";
    for (auto elem : v4)
        cout << elem << endl;
    cout << "V5";
    for (auto elem : v5)
        cout << elem << endl;
    cout << "V6";
    for (auto elem : v6)
        cout << elem << endl;
    cout << "V7";
    for (auto elem : v7)
        cout << elem << endl;
    cout << "V8";
    for (auto elem : v8)
        cout << elem << endl;
    return 0;
}