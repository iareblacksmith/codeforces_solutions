// 4A_Watermelon
#include <iostream>

int main()
{
    int w = 0; // weight of watermelon
    std::cin >> w;
    if (w >= 0 && w <= 100 && w % 2 == 0 && w != 2) // checking validity
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}