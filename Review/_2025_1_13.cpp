#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> strs{10, "hi"};
    for (auto str : strs)
        cout << str << " ";
    cout << endl;
    return 0;
}