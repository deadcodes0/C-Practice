#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
void func1(forward_list<string> &strList, string &str1, string &str2)
{
    auto prev = strList.before_begin();
    auto curr = strList.begin();

    while (curr != strList.end())
    {
        if (*curr == str1)
        {
            strList.insert_after(curr, str2);
            return;
        }
        prev = curr;
        curr++;
    }
    strList.insert_after(prev, str2);
    
}
int main()
{

    return 0;
}