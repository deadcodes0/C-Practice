#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<fstream>
using namespace std;
string& trans(string &s)
{
    for (auto iter = s.begin(); iter < s.end();)
    {
        *iter = tolower(*iter);
        if (*iter == ',' || *iter == '.') s.erase(iter);
        else iter++;
    }
    return s;
}
//11.7
void add_family(map<string, vector<string>> &families, const string &family)
{
    if (families.find(family) == families.end())
        families[family] = vector<string>();
}
void add_child(map<string, vector<string>> &families, const string &family,
const string &child)
{
    families[family].push_back(child);
}
int main()
{
    string s = "hellom,";
    cout << trans(s) << endl;
    //11.3, 11.4
    ifstream in("file");
    
    map<string, size_t> word_count;
    set<string> exclude { ",", ".", "?", "!", ":" };
    
    string word;
    while (in >> word)
    {
        if (exclude.find(word) == exclude.end())   
            ++word_count[word];
    }
    
    for (auto elem : word_count)
    {
        cout << elem.first << "occurs " << elem.second << " times";
    }
    cout << endl;

    return 0;
}
