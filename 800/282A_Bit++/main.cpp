// 282A_Bit++
#include <iostream>
#include <string>

int main()
{
    int x = 0;            // the one and only variable in Bit++
    int n = 0;            // number of lines to execute
    std::cin >> n;        // getting number of lines
    std::string lines[n]; // declaring strings according to number of lines
    for (int i = 0; i < n; i++)
    {
        std::cin >> lines[i];
        if (lines[i] == "++X" || lines[i] == "X++") // increment statements
        {
            x++;
        }
        if (lines[i] == "--X" || lines[i] == "X--") // decrement statements
        {
            x--;
        }
    }
    std::cout << x; // outputting final value of x
    return 0;
}