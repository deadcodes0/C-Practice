#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    try
    {
        if (num2 == 0)
        throw runtime_error("zero!");
        cout << "the result is " << num1 / num2 << endl;
    }
    catch(runtime_error &err)
    {
        cout << err.what() << endl;
    }
    
    return 0;
}