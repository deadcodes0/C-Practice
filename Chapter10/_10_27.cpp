#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
    sort(vec.begin(), vec.end());
    
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));

    for_each(lst.begin(), lst.end(),
    [](int s) -> void { cout << s << " "; });

    return 0;
}