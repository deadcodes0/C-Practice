#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item book;
    cout << "ISBN, 售出本数, 销售额, 平均售价：" << endl;
    while (cin >> book)
    {
        cout << book;
    }
    return 0;
}