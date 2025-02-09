#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
    list<string> sdeq;
    string word;
    while (cin >> word)
    {
        sdeq.push_back(word);
    }
    for (auto it = sdeq.cbegin(); it != sdeq.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}