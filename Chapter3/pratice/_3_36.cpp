#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr1[10], arr2[10];
    int equal = -1;
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr1[i] != arr2[i]) break;
    }
    if (i == 10) equal = 1;


    vector<int> nums1, nums2;
    int equal1 = 1;
    decltype(nums1.size()) i = 0;
    if (nums1.size() == nums2.size())
        for (i = 0; i < nums1.size(); i++)
            if (nums1[i] != nums2[i]) { equal1 = -1; break; }

    return 0;
}