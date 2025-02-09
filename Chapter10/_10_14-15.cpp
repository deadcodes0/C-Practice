#include<iostream>
using namespace std;
void func1(int val)
{
    auto sum = [val](int a)-> int { return a + val; };
    cout << sum(19);
}
int main()
{
    //10.14
    // auto sum = [](int a, int b)-> int { return a + b; };
    // auto result = sum(1, 6);
    // cout << result << endl;

    //10.15
    func1(1);
    
    return 0;
}