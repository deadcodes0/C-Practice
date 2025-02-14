#include<iostream>
#include<sstream>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<fstream>
#include<utility>
using namespace std;
int main()
{
    map<string, list<int>> line_word;
    string line, word;
    int lineno = 0;
    while (getline(cin, line))
    {
        lineno++;

        istringstream ist(line);
        while (ist >> word)
        {
            line_word[word].push_back(lineno);
        }
    }

    //11.12
    vector<pair<string, int>> pairs;

    string str;
    int val;
    while (cin >> str >> val)
    {
        pairs.push_back( pair<string, int>(str, val) );
    }
    //11.16
    map<int, string> my_map;
    auto map_it = my_map.begin();

    while (map_it != my_map.end())
    {

    }
    //11.20
    map<string, int> word_count;
    string word;
    while (cin >> word)
    {
        auto map_it = word_count.insert( {word, 1} );
        if (!map_it.second)
            ++map_it.first->second;

    }
    //11.28
    map<string, vector<int>> my_map2;
    map<string, vector<int>>::iterator res = my_map2.find("man");

    //11.31
    multimap<string, string> authors;

    string author;
    multimap<string, string>::iterator pos = authors.begin();
    while ( (pos = authors.find(author) ) != authors.end())
    {
        authors.erase(pos);
    }

    auto map_it2 = authors.equal_range(author);
    if (map_it2.first != map_it2.second)
    {
        authors.erase(map_it2.first, map_it2.second);   
    }

    //for each
    for (auto elem : authors)
    {
        cout << elem.first <<  ": " << elem.second << endl;
    }
    return 0;
}