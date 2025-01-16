#include<iostream>
#include<vector>
using namespace std;
string (&sPtr1())[10];
auto sPtr2()->string(&)[10];

string str[10];
decltype(str) &sPtr3();
int main()
{

    return 0;
}