#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    vector<int> iv;
    vector<int>::iterator iter = iv.begin(),
                           mid = iv.begin() + iv.size() / 2;
    int some_val = 1;
    while (iter != mid)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);

            iter += 2;
        }
        else
        {
            ++iter;
        }
        mid = iv.begin() + iv.size() / 2;
    }
    return 0;
}