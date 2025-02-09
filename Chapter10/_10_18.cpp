#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto uniq_end = unique(words.begin(), words.end());
words.erase(uniq_end, words.end());
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    stable_sort(words.begin(), words.end(), 
    [](const string &a, const string &b) -> bool { return a.size() < b.size(); } );

    auto wc = partition(words.begin(), words.end(),
    [sz](const string &a) -> bool { return a.size() > sz; });
}
int main()
{

    return 0;
}