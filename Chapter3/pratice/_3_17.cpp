#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
    string word;
    vector<string> words;

    while (cin >> word)
        words.push_back(word);

    for (auto elem : words)
    {
        for (auto ch : elem)
        {
            ch = toupper(ch);
            cout << ch;
        }
        cout << endl;
    }
        
    return 0;

}