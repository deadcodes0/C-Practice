#include<iostream>
#include<vector>
using namespace std;
int fun(int, int);
inline int add(int a, int b) { return a + b ;}
inline int myminus(int a, int b) { return a - b ;}
inline int mul(int a, int b) { return a * b ;}
inline int divi(int a, int b) { return a / b ;}
int main()
{
    int a = 6, b = 3;

    int (*funP1)(int, int) = &add;
    int (*funP2)(int, int) = &myminus;
    int (*funP3)(int, int) = &mul;
    int (*funP4)(int, int) = &divi;
    vector<int (*)(int, int)> vF = { funP1, funP2, funP3, funP4 };
    cout << vF[0](a, b) << endl;
    cout << vF[1](a, b) << endl;
    cout << vF[2](a, b) << endl;
    cout << vF[3](a, b) << endl;

    decltype(fun) *p1 = add, *p2 = myminus, *p3 = mul, *p4 = divi;
    vector<decltype(fun)*> vF1 = { p1, p2, p3, p4 };
    cout << vF1[0](a, b) << endl;
    cout << vF1[1](a, b) << endl;
    cout << vF1[2](a, b) << endl;
    cout << vF1[3](a, b) << endl;
    

    return 0;
}