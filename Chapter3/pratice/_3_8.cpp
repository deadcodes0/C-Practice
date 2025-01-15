#include<iostream>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    int index = 0;
    while (s1[index])
        s1[index++] = 'X';
    cout << s1 << endl;
    return 0;
}