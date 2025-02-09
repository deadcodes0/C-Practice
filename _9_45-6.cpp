#include<iostream>
#include<string>
using namespace std;
string full_string1(string &name, const string &prefix, const string &suffix)
{
    name.insert(name.begin(), 1, ' ');
    name.insert(name.begin(), prefix.begin(), prefix.end());

    name.append(" ");
    name.append(suffix.begin(), suffix.end());
    return name;
}
string full_string2(string &name, const string &prefix, const string &suffix)
{
    name.insert(0, " ");
    name.insert(0, prefix);

    name.insert(name.size(), " ");
    name.insert(name.size(), prefix);

    return name;
}
int main()
{

    return 0;
}