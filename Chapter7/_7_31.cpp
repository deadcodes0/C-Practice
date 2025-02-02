#include<iostream>
using namespace std;
// class Y;
// class X
// {
//     Y* pointer;
// };
// class Y
// {
//     X x;
// };
class X;
class Y
{
    X* x;
};
class X
{
    Y y;
};