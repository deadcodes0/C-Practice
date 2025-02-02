#include<iostream>
#include<string>
#include<vector>
#include<fstream>
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
int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        cerr << "请给出文件名" << endl;
        return -1;
    }
    string file_name = argv[1];
    ifstream input(file_name);
    if (!input)
    {
        cerr << "open file error!" << endl;
        return -1;
    }
    Sales_data total;

    string file_name1 = argv[2];
    ofstream output(file_name1);
    // print(output, total);
    return 0;
}