#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    string strName;
    string strAddress;

public:
    Person() = default;
    // Person(istream& is) { is >> *this; }
    Person(const string &name, const string &address)
    {
        strName = name;
        strAddress = address;
    }

    Person(const Person& p)
    {
        this->strName = p.strName;
        this->strAddress = p.strAddress;
    }
    
    const Person combine(const Person& p) const
    {
        Person cat (p.strName + this->strName,
        p.strAddress + this->strAddress);
        return(cat);
    }
    
    string getName() const { return strName; }
    string getAddress() const { return strAddress; }

    string& setName() { return strName; }
    string& setAddress() { return strAddress; }
    
};
Person add(const Person &p1, const Person &p2)
{
    Person cat(p1.combine(p2));
    return cat;
}
ostream& print(ostream& os, Person &p)
{
    os << "Name:" << p.getName() <<
    ", Address:" << p.getAddress() << endl;
    return os;
}
istream& read(istream& is, Person &p)
{
    is >> p.setName() >> p.setAddress();
    return is;
}
int main()
{
    Person p1("likun", "nanning");
    Person p2("yu", "jiangxi");
    Person p3 = add(p1, p2);

    print(cout, p3);
    read(cin, p3);
    
    print(cout, p3);

    return 0;
}