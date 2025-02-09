#include<iostream>
#include<vector>
using namespace std;
vector<int>::iterator
func1(vector<int>::iterator pbegin, vector<int>::iterator pend, int val)
{
    for (; pbegin != pend; pbegin++)
        if (*pbegin == val)
            return pbegin;
    return pend;
}
int main()
{

    return 0;
}