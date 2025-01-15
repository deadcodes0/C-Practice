#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> src;
    for (int i = 0; i < 10; i++) src.push_back(i);

    int copy[100];
    for (decltype(src.size()) i = 0; i < src.size(); i++) copy[i] = src[i];

    for (int i = 0; i < 10; i++) cout << copy[i] << " ";
    cout << endl;
    return 0;
}