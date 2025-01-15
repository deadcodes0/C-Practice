#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string result;
    // getline(cin, str);
    // cout << str << endl;

    // while (cin >> str)
    //     cout << str << endl;

    // while (cin >> str)
    //     result += str;
    // cout << result << endl;

    // while (cin >> str)
    // {
    //     if (!result.size())
    //         result += str;
    //     else
    //         result = result + " " + str;
    // }
    // cout << result << endl;

    getline(cin, str);
    for (auto &ch : str)
        if (ispunct(ch))
            ch = ' ';
    cout << str << endl;
    return 0;
}