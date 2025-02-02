#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    
    ifstream in("test");
    vector<string> words;
    string line, word;

    //首先这样子，in >> line
    //然后改成getline(in, line)
    while (getline(in, line))
    {
        words.push_back(line);
        //因为是input流 那当然是用流提取操作符>>
    }
    in.close();

    for (vector<string>::const_iterator
    it = words.cbegin(); it != words.cend(); it++)
    {
        istringstream input(*it);
        string word;
        while (input >> word)
        {
            cout << word << " ";
            cout << endl;
        }
    }
    return 0;

}