#include<iostream>
#include<string>
using namespace std;
unsigned callCnt(void)
{
    static unsigned int cnt = -1;
    return(++cnt);
}
double abs(double num)
{
    if (num < 0) return(-num);
    return num;
}
int main()
{
    // string pre, cur, input;
    // int curCnt = 1, maxCnt = 1;
    // while (cin >> input)
    // {
    //     cur = input;
    //     if (cur == pre)
    //     {
    //         if (++curCnt > maxCnt) maxCnt = curCnt;
    //     }
    //     else curCnt = 1;
    //     pre = cur;
    // }
    
    string input, pre;
    bool repeat = false;
    while (cin >> input)
    {
        if (pre == input)
        {
            repeat = true;
            break;
        }
        pre = input;
    }
    if (repeat) cout << "重复的单词是：" << input << endl;
    else cout << "没有重复的单词" << endl;

    return 0;
}