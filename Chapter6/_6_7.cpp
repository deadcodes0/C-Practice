#include<iostream>
using namespace std;
int callCnt()
{
    static unsigned int cnt = -1;
    return(++cnt);
}
int main()
{
    for (int i = 0; i < 10; i++) cout << callCnt() << endl;
    return 0;
}
