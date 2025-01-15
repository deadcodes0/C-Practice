#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    cout << s;

    string word;
    while (cin >> word)
        cout << word << endl;
    return 0;
}