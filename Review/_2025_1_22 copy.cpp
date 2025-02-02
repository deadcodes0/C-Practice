#include<iostream>
using namespace std;
class Person
{
public:
    Person() = default;
    Person(const string &name, const string &address)
        :strName(name), strAddress(address){}
    Person(istream &is);

    string getName() const { return strName; }
    string getAddress() const { return strAddress; }
private:
    string strName;
    string strAddress;

};
int main()
{
    return 0;
}