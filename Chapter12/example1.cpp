#include<iostream>
#include<memory>
#include<vector>
using namespace std;
class StrBlob
{
public:
    StrBlob();
    StrBlob(initializer_list<string> lst)
    : data( make_shared<vector<string>> (lst) ) {};

    typedef vector<string>::size_type size_type;
    
    size_type size() const { return data->size(); };
    
    void push_back(const string &s) { data->push_back(s); };
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    string &front()
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    string &back()
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    const string &front() const 
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const string &back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
private:
    shared_ptr< vector<string> > data;
    void check(size_type i, const string &msg) const;
};
void StrBlob::check (size_type i, const string &msg) const
{
    if (i >= size())
        throw out_of_range(msg);
}

int main()
{

    return 0;
}
