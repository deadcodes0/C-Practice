#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto uniq_end = unique(words.begin(), words.end());
    words.erase(uniq_end, words.end());
}
bool check_size(const string &s, string::size_type sz)
{
   return s.size() > sz;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = partition(words.begin(), words.end(),
    bind(check_size, _1, sz));

    for_each(words.begin(), wc,
    [](const string &s) -> void { cout << s << " "; } );
}
int main()
{

    return 0;
}