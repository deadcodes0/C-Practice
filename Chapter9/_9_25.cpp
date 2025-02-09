#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    vector<int> destVec(begin(ia), end(ia));
    auto iter = destVec.begin();
    while (iter != destVec.end())
    {
        if (*iter % 2 != 0)
        {
            iter = destVec.erase(iter);
        }
        else
        {
            iter++;
        }
    }
    list<int> destList(begin(ia), end(ia));
    //the same as
    return 0;
}