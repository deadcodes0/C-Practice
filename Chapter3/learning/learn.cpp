#include<iostream>
#include<string>
using namespace std;
int main()
{
    //example1
    string s1;
    string s2 = s1;
    string s3 = "hiya";//字符串字面量和字符串类型并不完全一致
    string s4(10, 'c');
    
    //example2
    // cin >> s1 >> s2;
    // cout << s1 << s2 << endl;

    //example3
    // string word;
    // while (cin >> word)
    //     cout << word << endl;

    //example4
    // string line;
    // while (getline(cin, line))
    //     cout << line << endl;

    //example5
    string s1 = "hello", s2 = "world";
    string s3 = s1 + "," + s2 + "\n";

    string s5 = "hello";

    string s6 = s1 + "," + "world";
    //string s7 = "hello" + "," + s2;
    string s8 = "hello" + ("," + s2);

    return 0; 
}