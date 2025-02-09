#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums;
    char pause;
    while (true)
    {
        nums.push_back(1);
        
        cout << "size: " << nums.size() << " "
        << "capacity: " << nums.capacity()
        << endl;

        cin >> pause;
    }
    return 0;
}