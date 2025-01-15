#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10];
    int dest[10];
    for (int i = 0; i < 10; i++) arr[i] = i;
    for (int i = 0; i < 10; i++) dest[i] = arr[i];

    vector<int> arr1;
    for (int i = 0; i < 10; i++) arr1.push_back(i);
    vector<int> dest1(arr1);
    for (auto elem : dest1) cout << elem << " ";
    return 0;
}