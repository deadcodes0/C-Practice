#include<iostream>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    for (auto &ch : s1)
        ch = 'X';
    cout << s1 << endl;
    return 0;
}