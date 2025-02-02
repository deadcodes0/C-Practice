#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Sales_data
{
    string bookNo; //书籍编号
    unsigned units_sold = 0; //销售量
    double sellingprice = 0.0; //原始售价
    double saleprice = 0.0; //实际售价
    double discount = 0.0; // 折扣

public:
    Sales_data() = default;
    Sales_data(const string &book): bookNo(book) {}
    Sales_data(const string &book, const unsigned num,
    const double sellp, const double salep);
    Sales_data(const string &book)
        :bookNo(book), units_sold(0),
        sellingprice(0.0), saleprice(0.0),
        discount(0){}
    string isbn() const { return bookNo; }
    
};
Sales_data::Sales_data(const string &book, const unsigned num,
const double sellp, const double salep)
{
    bookNo = book;
    units_sold =num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice != 0)
        discount = saleprice / sellingprice;
}
int main()
{
    cout << "请输入销售记录(ISBN、销售量、原价、实际售价)：";
    Sales_data total;
    return 0;
}