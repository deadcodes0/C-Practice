#include<iostream>
#include<string>
using namespace std;
void func1(string &s, string &oldVal, string &newVal)
{
    auto sbeg1 = s.begin();
    while (sbeg1 != s.end())
    {
        auto sbeg2 = sbeg1;
        auto oldbeg = oldVal.begin();
        while (sbeg2 + oldVal.size() <= s.end())
        {
            if (*oldbeg != *sbeg2) break;
            oldbeg++, sbeg2++;
        }
        sbeg1++;
    }
}
int main()
{

    return 0;
}