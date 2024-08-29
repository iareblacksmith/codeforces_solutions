// 112A_Petya_and_Strings
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::string s1 = "null",
                s2 = "null"; // declaring the two strings
    int result = 0;          // holds the result of the comparison

    std::cin >> s1 >> s2; // getting strings

    for (int i = 0; i < s1.length(); i++) // comparing the two strings with index
    {
        if ((s1[i] != s2[i]) && (std::abs(s1[i] - s2[i]) != 32))
        {
            result = (std::tolower(s1[i]) > std::tolower(s2[i])) ? 1 : -1; // ternary operator! :D
            break;                                                         // STOP COMPARING
        }
    }

    std::cout << result; // outputting result

    return 0;
}