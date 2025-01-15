#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s1;

    getline(cin, s1);
    for (auto &ch : s1)
        if (ispunct(ch))
            ch = ' ';

    cout << s1 << endl;    
    return 0;
}