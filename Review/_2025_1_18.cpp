#include<iostream>
#include<vector>
using namespace std;
typedef string str[10];
str &func1();
auto func2()->string (&)[10];
string func3[10];
decltype(func3) &func4();
int main()
{
    
    return 0;
}