#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> text(3, "hello the world!");

    for (auto it = text.begin(); it < text.end(); it++)
    {
        for (auto _it = it->begin(); _it < it->end(); _it++)
        {
            if (it == text.begin())
            {
                *_it = toupper(*_it);
            }
            cout << *_it;
        }
        cout << endl;
    }
    return 0;
}