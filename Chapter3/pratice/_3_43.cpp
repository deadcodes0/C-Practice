#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    for (int (&row)[4] : arr)
    {
        for (int col : row) cout << col << " ";
        cout << endl;
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    for (int (*row)[4] = arr; row < arr + 3; row++)
    {
        for (int* col = *row; col < *row + 4; col++)
        {
            cout << *col << " ";
        }
        cout << endl;
    }
    return 0;
}