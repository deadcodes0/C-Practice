#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // if (s1 > s2)
    //     cout << s1 << endl;
    // else if (s1 < s2)
    //     cout << s2 << endl;
    // else 
    //     cout << "s1 == s2 ==" << s1 << endl;
    decltype(s1.size()) slen1 = s1.size();
    decltype(s2.size()) slen2 = s2.size();

    if (slen1 > slen2)
        cout << s1 << endl;
    else if (slen1 < slen2)
        cout << s2 << endl;
    else 
        cout << "len(s1 == s2) == " << s1 << endl;
    return 0;
}