#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char strs1[] = "hello";
    char strs2[] = "world";

    char result[strlen(strs1) + strlen(strs2) - 1];

    strcpy(result, strs1);
    strcat(result, strs2);

    cout << strs1 << endl;
    cout << strs2 << endl;
    cout << result << endl;


    return 0;
}