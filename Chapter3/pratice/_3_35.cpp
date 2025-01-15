#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++) arr[i] = i;
    for (auto elem : arr) cout << elem << " ";
    cout << endl;
    int* p = begin(arr);
    while (p != end(arr))
    {
        *p = 0;
        p++;
    }
    for (auto elem : arr) cout << elem << " ";
    cout << endl;

    return 0;
}