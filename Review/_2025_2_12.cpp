#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include<list>
#include<sstream>
using namespace std;
//11.4
string& my_ignore(string &s)
{
    for (auto s_it = s.begin(); s_it != s.end();)
    {
        if (*s_it == ',' || *s_it == '.' || *s_it == '?' || *s_it == '!') 
        {
            s.erase(s_it);
        }
        else
        {
            *s_it = tolower(*s_it);
            ++s_it;
        }
    }
    return s;
}
//11.7
void add_family(map<string, vector<string>> &families, const string &family)
{
    if (families.find(family) == families.end())
    {
        families[family] = vector<string>();
    }
}
void add_child(map<string, vector<string>> &families, const string &family,
const string &child)
{
    families[family].push_back(child);
}
//11.14
void add_family(map<string, vector< pair<string, string> > > &families, const string &family)
{
    if (families.find(family) == families.end())
    {
        families[family] = vector< pair<string, string> >();
    }
}
void add_child(map<string, vector< pair <string, string> > > &families, const string &family,
const string &child, const string &birthday)
{
    families[family].push_back( {child, birthday} );
}

int main()
{
    //11.3-4
    map<string, size_t> word_count;
    
    ifstream ist ("file");
    string word;
    while (ist >> word)
    {
        ++word_count[my_ignore(word)];
    }

    for (const auto &res : word_count)
    {
        cout << res.first << ":" << res.second << endl;
    }

    //11.7
    map<string, vector<string>> families;

    //11.8
    vector<string> unique_words;

    while (ist >> word)
    {
        my_ignore(word);
        if (find(unique_words.begin(), unique_words.end(), word)
        == unique_words.end())
        {
            unique_words.push_back(word);
        }
    }

    //11.9
    map<string, list<int>> word_occurs;
    int lineNo = 0;
    string line;
    while (getline(ist, line))
    {
        ++lineNo;
        
        istringstream istr(line);
        while (istr >> word)
        {
            my_ignore(word);
            word_occurs[word].push_back(lineNo);    
        }
    }
    for (const auto &elem : word_occurs)
    {
        cout << elem.first << " occur at ";
        for (const auto &lineNo : elem.second)
        {
            cout << lineNo << " ";
        }
        cout << endl;
    }
    //11.12
    pair<string, int> seqs;
    vector<pair<string, int>> pairs;

    string str;
    int val;
    
    while (cin >> str && cin >> val)
    {
        pairs.push_back( pair<string ,int>(str, val) );

    }
    
    //11.28
    map<string, vector<int>> map2;
    map<string, vector<int>>::iterator map2_iter = map2.find("man");

    multimap<string, string> multi_authors;
    auto mul_iter = multi_authors.equal_range("man");
    if ( mul_iter.first != mul_iter.second)
    {
        multi_authors.erase(mul_iter.first, mul_iter.second);
    }


    for (auto beg = mul_iter.first, end = mul_iter.second; beg != end; ++beg)
    {
        cout << beg->first << ": " << beg->second << endl;
    }

    //范围for里面是解引用的迭代器
    for (auto &book : multi_authors)
    {
    }
    //例如
    vector<int> nums;
    for (int &num : nums)
    {
        cout << num << endl;
    }
    return 0;
}