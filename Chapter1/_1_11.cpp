#include<iostream>
int main()
{
    std::cout << "请输入两个数" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;

    if (v1 > v2)
    {
        while (v1 >= v2)
        {
            std::cout << v1 << " ";
            v1 -= 1;
        }
    }
    else if (v1 < v2)
    {
        while (v1 <= v2)
        {
            std::cout << v1 << " ";
            v1 += 1;
        }
    }
    std::cout << std::endl;
    return 0;
}
