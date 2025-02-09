#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<char> str { 'm', 'a', 'n', 'w', 'h', 'a', 't', };
    string s(str.data(), str.size());
    cout << s;
    return 0;
}