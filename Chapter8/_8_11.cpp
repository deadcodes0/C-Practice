#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
struct PersonInfo
{
    string name;
    vector<string> phones;

    ostream& print(ostream& os)
    {
        os << name << " ";
        for (auto it = phones.cbegin(); it != phones.cend(); it++)
            os << *it << " ";
        os << endl;
        return os;
    }
};
int main()
{
    string line, word;
    vector<PersonInfo> people;

    istringstream record;

    while (getline(cin, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    for (auto peopInfo : people)
    {
        peopInfo.print(cout);
    }
    return 0;
}