#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
struct PersonInfo
{
    string name;
    vector<string> phones;
};
istream& fun(istream& is)
{
    string str;
    while (is >> str)
    {
        if (is.bad())
        {
            cerr << "IO error!" << endl;
        }
        if (is.fail())
        {
            cerr << "Input is error!" << endl;
            cerr << "please try again!" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << str << endl;
    }
    is.clear();
    return is;
}
int main()
{
    // ostringstream msg;
    // msg << "C++ Primer Fifth Section";
    // istringstream istr(msg.str());
    // fun(istr);

    ifstream data_file("data");
    // string line;
    // vector<string> words;
    // while (getline(data_file, line))
    // {
    //     words.push_back(line);
    // }
    // data_file.close();

    // istringstream in_str;
    // for (vector<string>::const_iterator
    // it = words.cbegin(); it != words.cend(); it++)
    // {
    //     string word;
    //     in_str.str(*it);

    //     while (in_str >> word)
    //         cout << word << " " << endl;
    // }

    string line, word;
    vector<PersonInfo> people;

    while (getline(data_file, line))
    {
        PersonInfo info;
        istringstream in_str(line);

        in_str >> info.name;
        while (in_str >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (PersonInfo &info : people)
    {
        cout << info.name << " ";
        for (string &phone : info.phones)
            cout << phone << " ";
        cout << endl;
    }
    
    return 0;
}