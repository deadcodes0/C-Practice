#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
    // vector<string> words;
    // auto bc = count_if(words.begin(), words.end(),
    // [](string &a) -> bool { return a.size() > 6; });


    int val = 10;
    auto result = [val]() mutable -> bool
    {
        if (val == 0) return true;
        else --val;
        return false;
    };

    for (int i = 0; i <= 10; ++i)
    {
        cout << result() << " ";
    }
    cout << endl;

    return 0;
}