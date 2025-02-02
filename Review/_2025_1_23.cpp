#include<iostream>
using namespace std;
class Nodefault
{
public:
    Nodefault(int _num) : num(_num) {}
private:
    int num;
};
class C
{
private:
    Nodefault obj;
public:
    C(int num = 0) : obj(num) {}
};
istream& f(istream &is)
{
    int val;
    while (is >> val, !is.eof())
    {
        if (is.bad()) throw runtime_error("IO流错误");
        if (is.fail())
        {
            cout << "输入错误，请重新输入" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << val << endl;
    }
    is.clear();
    return is;
}
int main()
{
    f(cin);
    return 0;
}