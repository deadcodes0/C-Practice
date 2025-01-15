#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> strs;
    string input;
    while (cin >> input)
        strs.push_back(input);
    for (auto str : strs)
        cout << str << endl;

    return 0;
}