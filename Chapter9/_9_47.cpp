#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void find_char(string &s, const string &chars)
{
    string::size_type p = 0;
    while ( (p = s.find_first_of(chars, p) ) != string::npos )
    {
        cout << "pos: " << p << "char: " << s[p] << endl;
        p++;
    }
}
int main()
{
    string s("ab2c3d7R4E6");
    find_char(s, "123456789");
    find_char(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    return 0;
}