#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> numsList { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    auto prev = numsList.before_begin();
    auto curr = numsList.begin();

    while (curr != numsList.end())
    {
        if (*curr % 2)
        {
            curr = numsList.insert_after(curr, *curr);
            prev = curr;
            curr++;
        }
        else 
        {
            curr = numsList.erase_after(prev);
        }
    }
    for (auto elem : numsList) cout << elem << " ";
    cout << endl;
    return 0;
}