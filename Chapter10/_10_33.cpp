#include<iostream>
#include<iterator>
#include<fstream>
using namespace std;
void odd_and_even(ifstream &in_file, ofstream &out_file1, ofstream &out_file2)
{
    istream_iterator<int> in_iter(in_file), eof;
    ostream_iterator<int> odd_out_iter(out_file1, " ");
    ostream_iterator<int> even_out_iter(out_file1, "\n");
    while (in_iter != eof)
    {
        if (*in_iter % 2 == 1)
        {
            *odd_out_iter++ = *in_iter;
        }
        else
        {
            *even_out_iter++ = *in_iter;
        }
        in_iter++;
    }
}
int main()
{
    return 0;
}