#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    getline(cin, text);
    int vowelCnt = 0;
    for (const auto &ch : text)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            ++vowelCnt;
            break;
        
        case 'e':
        case 'E':
            ++vowelCnt;
            break;

        case 'i':
        case 'I':
            ++vowelCnt;
            break;

        case 'o':
        case 'O':
            ++vowelCnt;
            break;

        case 'u':
        case 'U':
            ++vowelCnt;
            break;

        default:
            break;
        }
    }
    cout << vowelCnt << endl;
    return 0;
}