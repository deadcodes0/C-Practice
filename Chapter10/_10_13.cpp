#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool compare_word(const string &s)
{
    return s.size() >= 5;
}
int main()
{
    vector<string> words { "1234567", "1", "12345", "123", 
        "12345678", "12", "1234" };
    partition(words.begin(), words.end(), compare_word);
    for (auto elem : words) cout << elem << " ";
    cout << endl;
    return 0;
}