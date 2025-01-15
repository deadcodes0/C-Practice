#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    while (cin >> s1)
    {
        if (!s2.size())
            s2 = s2 + s1;
        else
            s2 = s2 + " " + s1;
    }
    cout << s2 << endl;
    return 0;
}