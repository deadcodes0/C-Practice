#include<iostream>
#include<memory>
#include<vector>
using namespace std;
shared_ptr<vector<int>> new_vector(void)
{
    return make_shared<vector<int>>();
}
void func1(istream &in, shared_ptr<vector<int>> pvec)
{
    int val;
    while (in >> val)
    {
        pvec->push_back(val);
    }
}
void print_vals(shared_ptr<vector<int>> pvec)
{
    for (const auto &val : *pvec)
    {
        cout << val << " " << endl;
    }
}
int main()
{
    shared_ptr<vector<int>> pvec = new_vector(); 
    
    func1(cin, pvec);
    print_vals(pvec);
    
    unique_ptr<int> uptr1();
    return 0;
}