#include<iostream>
using namespace std;
void swap(int* num1, int* num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
int main()
{
    int num1 = 3, num2 = 7;
    cout << "before swap(num1, num2)"
    << "(" <<num1<< "," <<num2<< ")" 
    << endl;
   
    swap(&num1, &num2);
    
    cout << "after swap(num1, num2)"
    << "(" <<num1<< "," <<num2<< ")" 
    << endl;
    return 0;
} 