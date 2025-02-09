#include<iostream>
#include<vector>
using namespace std;
bool func1(vector<int>::iterator pbegin, vector<int>::iterator pend, int val)
{
    for (; pbegin != pend; pbegin++)
        if (*pbegin == val)
            return true;
    return false;
}
int main()
{

    return 0;
}