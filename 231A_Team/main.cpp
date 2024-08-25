// 231A_Team
#include <iostream>

int main()
{
    int n = 0; // number of problems to solve
    std::cin >> n;
    int p[n];                   // problems
    int s = 0;                  // number of solvable problems
    for (int i = 0; i < n; i++) // loop with the size of number of problems
    {
        int l[3] = {0, 0, 0}; // array to hold 1s and 0s
        for (int k = 0; k < 3; k++)
        {
            std::cin >> l[k]; // getting the 1s and 0s
        }
        if (l[0] + l[1] + l[2] >= 2)
        {
            s++; // incrementing the number of solvable problems
        }
    }
    std::cout << s; // printing out final output (solvable problems)
    return 0;
}