#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
#include<sstream>
using namespace std;
void word_transform(ifstream &wordTrans_file, ifstream &input)
{
    string line;
    map<string, string> transMap(buildMap(wordTrans_file));
    while (getline(input, line))
    {
        istringstream ist(line);
        string word;
        bool firstword = true;
        while (ist >> word)
        {
            if (firstword)
            {
                firstword = false;
            }
            else
            {
                cout << " ";
            }
            cout << transform(word, transMap);
        }
        cout << endl;
    }
}
string &transform(string &s, map<string, string> &transMap)
{
    auto map_it = transMap.find(s);
    if (map_it != transMap.end())
    {
        return map_it->second;
    }
    return s;
}
map<string, string> buildMap(ifstream &wordTrans_file)
{
    string key, value;
    map<string, string> transMap;
    while (wordTrans_file >> key && getline(wordTrans_file, value))
    {
        if (value.size() > 1)
            transMap[key] = value.substr(1);
        else
            throw runtime_error("no rule for " + key);
        return transMap;
    }
}
pair<string, int> process(vector<string> &v)
{
    if (!v.empty())
        return { v.back(), v.back().size() };
    else
        return pair<string, int>();
}
int main()
{
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i);
    }

    set<int> iset(ivec.begin(), ivec.end());
    multiset<int> miset(ivec.begin(), ivec.end());

    cout << ivec.size() << endl;
    cout << iset.size() << endl;
    cout << miset.size() << endl;


    pair<string, string> anon;
    pair<string, vector<int>> line;

    map<string, size_t> word_count;
    auto map_it = word_count.begin();
    
    cout << map_it->first;
    cout << " " << map_it->second;
    map_it->second++;

    set<int> iset = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    set<int>::iterator set_it = iset.begin();
    if (set_it != iset.end())
    {
        cout << *set_it << endl;
    }

    auto map_cit = word_count.cbegin();
    while (map_cit != word_count.end())
    {
        cout << map_cit->first << " occurs "
        << map_cit->second << " times " << endl;
        ++map_cit;
    }
    
    vector<int> ivec = { 2, 4, 6, 8, 2, 4, 6, 8 };
    set<int> set2;
    set2.insert(ivec.begin(), ivec.begin());
    set2.insert( {1, 3, 5, 7, 1, 3, 5, 7} );

    string word;
    word_count.insert({word, 1});
    word_count.insert(make_pair(word, 1));
    word_count.insert(pair<string, size_t>(word, 1));
    word_count.insert(map<string, size_t>::value_type(word, 1));

    while (cin >> word)
    {
        pair<map<string, size_t>::iterator, bool>
        map_iter = word_count.insert( {word, 1} );
        if (!map_iter.second)
            ++map_iter.first->second;
    }

    auto cnt = word_count.erase(word);
    if (cnt)
        cout << "ok, remove " << word << endl;
    else
        cout << "not find " << word << endl;
    
    word_count["hello"] = 1;

    if (word_count.find("man") == word_count.end())
        cout << "man is not in the word_count" << endl;


    multimap<string, string> authors;

    string seach_item("what");
    auto entries = authors.count(seach_item);
    auto iter = authors.find(seach_item);

    while (entries)
    {
        cout << iter->first << ": " << iter->second << endl;
        --entries;
        ++iter;
    }

    for (auto beg = authors.lower_bound(seach_item);
    beg != authors.upper_bound(seach_item); ++beg)
    {
        cout << beg->first << ": " << beg->second << endl;
    }

    auto range_iter = authors.equal_range(seach_item);
    auto beg_it = range_iter.first;
    auto end_it = range_iter.second;
    while (beg_it != end_it)
    {
        cout << beg_it->second << endl;
    }

    return 0;
}