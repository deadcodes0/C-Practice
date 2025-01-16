#include<iostream>
using namespace std;
int sum(initializer_list<int> lst)
{
    int sum = 0; 
    for (auto p = lst.begin(); p < lst.end(); p++)
        sum += *p;
    return(sum);
}
int main(int argc, char* argv[])
{
    int _sum = sum({1,2,3,4,5});
    cout << _sum << endl;
    return 0;
}