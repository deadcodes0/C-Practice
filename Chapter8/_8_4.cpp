#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    string file_name = "test";
    ifstream read(file_name);
    if (!read)
    {
        cerr << "open file error!" << endl;
        return -1;
    }
    string line;
    vector<string> words;
    while (read >> line)
    {
        words.push_back(line);   
    }
    read.close();

    for (auto it = words.cbegin(); it != words.cend(); it++)
    {
        cout << *it << " ";
        cout << endl;
    }
    cout << endl;
    
    return 0;
}