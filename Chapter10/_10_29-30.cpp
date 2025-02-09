#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    //10.29
    // vector<string> vecStr;
    // istream_iterator<string> iter_in(cin), eof;
    // while (iter_in != eof)
    // {
    //     vecStr.push_back(*iter_in++);
    // }
    // for (auto elem : vecStr) cout << elem << " ";
    // cout << endl;

    //10.30
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> output(cout, " ");
    
    vector<int> vec;
    while (in_iter != eof)
    {
        vec.push_back(*in_iter++);
    }
    sort(vec.begin(), vec.end());

    copy(vec.begin(), vec.end(), output);
    cout << endl; 
    return 0;
}