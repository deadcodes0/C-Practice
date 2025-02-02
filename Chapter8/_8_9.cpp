#include<iostream>
#include<sstream>
using namespace std;
istream& fun(istream& is)
{
    string v;
    while (is >> v, !is.eof())
    {
        if (is.bad())
            throw runtime_error("IO流错误");
        if (is.fail())
        {
            cerr << "数据错误，请重试" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }

    is.clear();
    return is;
}
int main()
{
    ostringstream msg;
    msg << "C++ Primer" << endl;
    istringstream in(msg.str());
    
    fun(in);
    
    return 0;
}