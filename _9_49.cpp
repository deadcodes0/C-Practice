#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void find_longest_word(ifstream &is)
{
    string word, longest_word;
    int max_length = 0;
    while (is >> word)
    {
        if (word.find_first_of("bdfghjklpqty") != string::npos)
        {
            continue;
        }
        cout << word << " ";
        if (max_length < word.size())
        {
            max_length = word.size();
            longest_word = word;
        }
    }
    cout << "最长子串:" << longest_word << endl;
}
int main()
{
    
    return 0;
}