#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    
    // char strs1[] = "hello";
    // char strs2[] = "world";
    // char result[strlen(strs1) + strlen(strs2)];

    // strcpy(result, strs1);
    // strcat(result, strs2);

    // cout << result << endl;

    // int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    // vector<int> copy(begin(arr), end(arr));
    // for (auto elem : copy) cout << elem << " ";
    // cout << endl;

    // vector<int> src;
    // for (int i = 0; i < 10; i++) src.push_back(i);
    // auto it = src.cbegin();

    // int copy[src.size()];
    // for (auto &elem : copy)
    // {
    //     elem = *it;
    //     cout << elem << " ";
    //     it++;
    // }


    int arr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    for (int (&row)[4] : arr)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    for (int (*row)[4] = arr; row < arr + 3; row++)
    {
        for (int *col = *row; col < *row + 4; col++)
        {
            cout << *col << " ";
        }
        cout << endl;
    }
    return 0;
}