#include<iostream>
#include<string>
using namespace std;
void replace_string(string &s, const string &oldVal, const string &newVal)
{
    int p = 0;
    while ( (p = s.find(oldVal, p)) != string::npos)
    {
        s.replace(p, oldVal.size(), newVal);
        p += newVal.size();
    }
}
string insert_string(string &name, const string &prefix, const string &suffix)
{
    name.insert(0, " ");
    name.insert(0, prefix);
    
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);
    return name;
}
int main()
{

    return 0;
}