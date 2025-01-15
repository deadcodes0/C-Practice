#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++) arr[i] = i;

    vector<int> copy(begin(arr), end(arr));
    for (auto elem : copy) cout << elem << " ";
    cout << endl;
    return 0;
}