#include<iostream>
using namespace std;
class window_mgr
{
public:
    void clear();
};
class Screen
{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;
public:
    friend void window_mgr::clear();

    Screen() = default;
    Screen(const unsigned ht, const unsigned wh)
    :height(ht), width(wh), contents(ht * wh, ' '){}
    Screen (const unsigned ht, const unsigned wh, 
    const char c)
    :height(ht), width(wh), contents(ht * wh, c){}

    Screen& move(unsigned r, unsigned c)
    {
        cursor = r * width + c;
        return(*this);
    }
    Screen& set(const char ch)
    {
        contents[ cursor ] = ch;
        return(*this);
    }
    Screen& set(unsigned r, unsigned c, char ch)
    {
        contents[ r * width + c ] = ch;
        return(*this);
    }
    Screen& display()
    {
        cout << contents;
        return(*this);
    }
};

int main()
{
    Screen myScreen(10, 10, 'X');
    myScreen.set('#');
    myScreen.display();

    return 0;
}