#include<iostream>
using namespace std;
class Sales_data
{
public:
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend ostream& print(ostream& os, const Sales_data &rhs);
    friend istream& read(istream &is, Sales_data &item);

    Sales_data() = default;
    Sales_data(const string &book)
        :bookNo(book){}
    Sales_data(const string &book, const unsigned num,
    const double sellp, const double salep);
    Sales_data(istream& is);
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data &rhs)
    {
        bookNo += rhs.bookNo;
        units_sold += rhs.units_sold;

        saleprice = rhs.saleprice * rhs.units_sold
        + saleprice * units_sold;

        if (sellingprice != 0)
        discount = saleprice / sellingprice; 
        
        return *this;
    }
private:
    string bookNo; //书籍编号
    unsigned units_sold = 0; //销售量
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
};

Sales_data::Sales_data(const string &book, const unsigned num,
const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;

    if (sellingprice != 0)
    discount = saleprice / sellingprice;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return(sum);
}
ostream& print(ostream& os, const Sales_data &rhs)
{
    os << "bookNo:" << rhs.bookNo << endl
    << "units_sold:" << rhs.units_sold << endl
    << "sellingprice:" << rhs.sellingprice << endl
    << "saleprice:" << rhs.saleprice << endl
    << "discount:" << rhs.discount << endl;
    return os;
}
istream& read(istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold 
    >> item.sellingprice >> item.saleprice;
    return is;
}
int main()
{
    Sales_data s1;
    read(cin, s1);
    print(cout, s1);
    
    Sales_data s2 ("C++bugs", 1, 1, 1);
    Sales_data sum = add(s1, s1);
    print(cout, sum);

    return 0;
}