#include<iostream>
#include<string>
using namespace std;
double abs(double num)
{
    if (num < 0) num = -num;
    return num;
}
int main()
{
    int num;
    cin >> num;
    cout << abs(num) << endl;

    return 0;
}