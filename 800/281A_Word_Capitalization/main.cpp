// 281A_Word_Capitalization
#include <iostream>
#include <string>

int main()
{
    std::string capital = "null";              // word to capitalize
    std::cin >> capital;                       // getting word
    if (capital[0] >= 97 && capital[0] <= 122) // checking case
    {
        capital[0] = std::toupper(capital[0]); // converting to uppercase
    }
    std::cout << capital; // outputting capitalized
    return 0;
}