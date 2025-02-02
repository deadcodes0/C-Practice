#include<iostream>
using namespace std;
class NoDefault
{
private:
    int num;
public:
    NoDefault(int _num) : num(_num){};
};
class C
{
private:
    NoDefault obj;
public:
    C(int _num = 0) : obj(_num){};
};
int main()
{
    return 0;
}