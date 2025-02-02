#include<iostream>
#include<vector>
using namespace std;
inline void print(const int num)
{
    cout << num << endl;
}
inline void print(const int* nums, unsigned size)
{
    for (unsigned i = 0; i < size; i++) cout << nums[i] << " ";
    cout << endl;
}
inline void print(int* cb, const int* ce)
{
    for (int* b = cb; b < ce; b++) cout << *b << " " ;
    cout << endl;
}
string (&func1())[10];
typedef string arr[10];
arr& func2();
auto func3()->string(&) [10];
string str[10];
decltype(str) &func4();
inline int add(int num1, int num2) { return num1 + num2; }
inline int mius(int num1, int num2) { return num1 - num2; }
inline int mul(int num1, int num2) { return num1 * num2; }
inline int divd(int num1, int num2) { return num1 / num2; }
int main()
{
    decltype(add) *p1 = add, *p2 = mius, *p3 = mul, *p4 = divd;
    vector<int (*)(int, int)> pointers = { p1, p2, p3, p4 };
    cout << p1(6, 3) << endl;
    cout << p2(6, 3) << endl;
    cout << p3(6, 3) << endl;
    cout << p4(6, 3) << endl;
    vector<decltype(add)*> pointers1;

    int i = 0, j[2] = { 0, 1 };
    print(i);
    print(j, sizeof(j) / sizeof(j[0]));
    print(begin(j), cend(j));


    return 0;
}