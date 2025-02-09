#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool six_or_less(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}
int main()
{
    //10.22
    // vector<string> words;
    // auto call = bind(six_or_less, _1, 6);

    // count_if(words.begin(), words.end(), bind(six_or_less, _1, 6));

    //10.23
    vector<int> vec;
    string s;
    auto p = find_if(vec.begin(), vec.end(),
    bind(six_or_less, s, _1));
    
    return 0;
}