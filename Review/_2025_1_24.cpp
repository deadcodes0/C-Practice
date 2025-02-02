// #include<iostream>
// #include<vector>
// #include<fstream>
// #include<sstream>
// using namespace std;
// istream& func(istream& is)
// {
//     int v;
//     while (is >> v, !is.eof())
//     {
//         if (is.bad())
//             throw runtime_error("IO异常！");
//         if (is.fail())
//         {
//             cerr << "数据错误，请重试！";
//             is.clear();
//             is.ignore(100, '\n');
//             continue;
//         }
//         cout << v << endl;
//     }
//     is.clear();
//     return is;
// }
// istream& func1(istream& is, vector<string> &words)
// {
//     if (!is)
//     {
//         cerr << "open file fail!" << endl; 
//     }
//     string line;
//     while (is >> line)
//     {
//         words.push_back(line);

//     }
//     is.clear();
//     return is;
// }
// struct PersonInfo
// {
//     string name;
//     vector<string> phones;
// };
// istream& fun(istream& is)
// {
//     string v;
//     while (is >> v, !is.eof())
//     {
//         if (is.bad())
//             throw runtime_error("IO流错误");
//         if (is.fail())
//         {
//             cerr << "数据错误，请重试" << endl;
//             is.clear();
//             is.ignore(100, '\n');
//             continue;
//         }
//         cout << v << endl;
//     }

//     is.clear();
//     return is;
// }
// int main()
// {
//     // func(cin);

//     // ifstream input_file("data");
//     // vector<string> words;

//     // func1(input_file, words);
//     // input_file.close();

//     // for (vector<string>::const_iterator
//     // it = words.cbegin(); it != words.cend(); it++)
//     // {
//     //     cout << *it << " ";
//     //     cout << endl;
//     // }
//     // cout << endl;

//     // ifstream file_info("info");
//     // string line, word;
//     // vector<PersonInfo> people;

//     // while (getline(file_info, line))
//     // {
//     //     PersonInfo info;
//     //     istringstream record(line);
//     //     record >> info.name;
//     //     while (record >> word)
//     //     {
//     //         info.phones.push_back(word);
//     //     }
//     //     people.push_back(info);
//     // }
//     // for (PersonInfo &peop_info : people)
//     // {
//     //     cout << peop_info.name << " ";
//     //     for (string &phone : peop_info.phones)
//     //         cout << phone << " ";
//     //     cout << endl;
//     // }

//     // ostringstream msg;
//     // msg << "C++ Primer fifth section" << endl;
//     // istringstream in(msg.str());
//     // fun(in);

//     vector<string> words;

//     ifstream file("data");
//     string line;
//     while (getline(file, line))
//     {
//         if (!file)
//         {
//             cerr << "open file fail!" << endl;
//             return -1;
//         }
//         words.push_back(line);
//     }
//     file.close();
    
//     for (string &str : words)
//     {
//         istringstream line_str(str);
//         string word;

//         while (line_str >> word)
//         {
//             cout << word << " ";
//             cout << endl;
//         }
//     }
//     return 0;
// }
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
int main()
{
    string line, word;
    vector<PersonInfo> people;
    
    ifstream info("info");
    istringstream record;
    while (getline(info, line))
    {
        PersonInfo info;

        record.clear();
        record.str(line);

        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);

        people.push_back(info);
    }
    return 0;
}

