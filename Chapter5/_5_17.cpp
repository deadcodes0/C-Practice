#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums1, nums2;
       
    auto cb1 = nums1.cbegin();
    auto cb2 = nums2.cbegin();

    while (cb1 != nums1.cend() && cb2 != nums2.cend())
    {
        if (*cb1++ != *cb2++) break;
    }
    if (cb1 == nums1.cend() && cb2 == nums2.cend()) cout << "true" << endl;
    return 0;
}