#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    string cur = "", next = "";
    int maxCount = 0;
    int curCount = 0;
    while (cin >> text)
    {
        if (cur == next) 
        {
            curCount++;
            if (curCount > maxCount) maxCount = curCount;
        }
        else curCount = 1;
        
        cur = next;
    }
    return 0;
}