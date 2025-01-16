#include<iostream>
using namespace std;
void print(const int num)
{
    cout << num << endl;
}
void print(const int* nums, const int sz)
{
    for (int i = 0; i < sz; i++)
        cout << *(nums + i) << " ";
    cout << endl;
}
void print(const int* begin, const int* end)
{
    for (auto q = begin; q < end; q++)
        cout << *q << " ";
    cout << endl;
}
int main()
{
    int i = 0, j[2] = { 0, 1 };
    print(i);
    print(j, sizeof(j) / sizeof(j[0]) );
    print(begin(j), end(j));

    return 0;
}