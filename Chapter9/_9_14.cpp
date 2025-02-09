#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    list<char*> Lstrs { "Rick", "And", "Morty" };
    vector<string> Vstrs;

    Vstrs.assign(Lstrs.cbegin(), Lstrs.cend());
    for (string str : Vstrs) cout << str << " ";
    cout << endl;
    return 0;
}