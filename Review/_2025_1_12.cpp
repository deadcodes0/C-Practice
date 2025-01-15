#include<cctype>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (auto ch : str)
        if (!ispunct(ch))
            cout << ch;
    return 0;
}