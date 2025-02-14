#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
void replace_string(string &s, string &oldVal, string &newVal)
{
    string::size_type p = 0;
    while ( (p = s.find(oldVal, p)) != string::npos )
    {
        s.replace(p, oldVal.size(), newVal);
        p += newVal.size();
    }
}
void find_num_alpha(const string &s, const string &chars)
{
    string::size_type pos = 0;
    while ( (pos = s.find_first_of(chars, pos) ) != string::npos )
    {
        cout << s[pos] << " ";
        pos++;
    }
    cout << endl;
}
void find_longest_word(ifstream &is)
{
    string word, longest_word;
    int max_length = 0;
    while (is >> word)
    {
        if (word.find_first_of("bdfghklpqty") != string::npos)
            continue;
        cout << word << " ";
        
        if (max_length < word.size())
        {
            max_length = word.size();
            longest_word = word;
        }
    }
}
int main()
{
    string s = "ab2c3d7R4E6";
    find_num_alpha(s, "123465789");
    find_num_alpha(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    return 0;
}