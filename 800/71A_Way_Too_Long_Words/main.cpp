// 71A_Way_Too_Long_Words
#include <iostream>
#include <string>

int main()
{
    int n = 0;            // number of lines
    std::cin >> n;        // getting number of lines
    std::string words[n]; // delaring words according to number of lines

    for (int i = 0; i < n; i++) // getting words
    {
        std::cin >> words[i];
    }

    for (int i = 0; i < n; i++) // checking words and abbreviating
    {
        if (words[i].length() > 10)
        {
            std::cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << "\n";
        }
        else
        {
            std::cout << words[i] << "\n";
        }
    }
    return 0;
}