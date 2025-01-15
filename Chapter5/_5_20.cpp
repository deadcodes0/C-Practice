#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pre, cur, str;
    pre = cur = str = "";
    while (cin >> str)
    {
        cur = str;
        if (cur == pre) break;
        pre = cur;
    }
    if (cur == pre) cout << "repeat word is " << cur << endl;
    else cout << "no" << endl;

    return 0;
}