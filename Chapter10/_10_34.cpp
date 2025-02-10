#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    /*
    //10.34
    vector<int> nums { 1, 2, 3, 4, 6, 5, 7, 8, 9 };
    auto crbeg = nums.crbegin();
    while (crbeg != nums.crend())
    {
        cout << *crbeg++ << " ";
    }
    cout << endl;


    //10.35
    auto last = nums.end();
    while (last != nums.begin())
    {
        cout << *(--last) << " ";
    }
    cout << endl;
    

    //10.36
    list<int> lst { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto last_zero = find(lst.rbegin(), lst.rend(), 0);
    last_zero++;

    int p = 1;
    for (auto iter = lst.begin(); iter != last_zero.base(); iter++, p++)
    {
        ;
    }

    if (p >= lst.size())
        cout << "container has not zero" << endl;
    else 
    cout << "the last zero position is " << p << endl;

    //10.37
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> nums { 1, 2, 3, 4, 6, 5, 7, 8, 9, 10 };
    copy(nums.begin(), nums.end(), out_iter);
    cout << endl;
    
    vector<int>::reverse_iterator re(nums.begin() + 2);
    vector<int>::reverse_iterator rb(nums.begin() + 7);

    list<int> lst;
    copy(rb, re, back_inserter(lst));
    copy(lst.begin(), lst.end(), out_iter);
    cout << endl;
    */

    //10.42
    list<int> lst;
    lst.sort();
    lst.unique();
    
    return 0;
}