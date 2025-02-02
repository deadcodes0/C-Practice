#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Sales_data
{
private:
    string bookNo; //书籍编号
    unsigned units_sold = 0; //销售量
    double sellingprice = 0.0; //原始售价
    double saleprice = 0.0; //实际售价
    double discount = 0.0; // 折扣

public:
    friend istream& read(istream &is, Sales_data &rhs);

    Sales_data() : Sales_data("", 0, 0, 0)
    { cout << "default four arg" << endl; }
   
    Sales_data(const string &book)
        : Sales_data(book, 0, 0, 0) 
    { cout << "single book arg" << endl; }
    Sales_data(istream& is)
        : Sales_data() { read(is, *this); }
    Sales_data(const string &book, const unsigned num,
    const double sellp, const double salep);

    // Sales_data(const string &book)
    //     :bookNo(book), units_sold(0),
    //     sellingprice(0.0), saleprice(0.0),
    //     discount(0){}
    string isbn() const { return bookNo; }
    
};
istream& read(istream &is, Sales_data &rhs)
{
    is >> rhs.bookNo >> rhs.units_sold
    >> rhs.sellingprice >> rhs.saleprice;
    return is;
}
Sales_data::Sales_data(const string &book, const unsigned num,
const double sellp, const double salep)
    :bookNo(book), units_sold(num),
    sellingprice(sellp), saleprice(salep)
{
    cout << "four init arg" << endl;
    if (sellingprice != 0)
        discount = saleprice / sellingprice;
}
int main()
{

    // Sales_data default_sale_data;
    // Sales_data str_arg_sale_data("like");
    // Sales_data four_arg_sale_data("C++Bugs", 0, 0, 0);
    Sales_data cin_arg_sale_data(cin);
    
    return 0;
}