#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    list<int> lst1, lst2, lst3;

    
    copy(nums.begin(), nums.end(), inserter(lst1, lst1.end()));
    for_each(lst1.begin(), lst1.end(),
    [](const int &val) -> void { cout << val << " "; } );


    cout << endl;
    copy(nums.begin(), nums.end(), back_inserter(lst2));
    for_each(lst2.begin(), lst2.end(),
    [](const int &val) -> void { cout << val << " "; } );
    
    cout << endl;
    copy(nums.begin(), nums.end(), front_inserter(lst3));
    for_each(lst3.begin(), lst3.end(),
    [](const int &val) -> void { cout << val << " "; } );
    
    return 0;
}