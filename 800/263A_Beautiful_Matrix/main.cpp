// 263A_Beautiful_Matrix
#include <iostream>
#include <cmath>

int main()
{
    int matrix[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}}; // declaring the matrix (2 dimensional array)

    int moves = 0; // declaring number of moves

    for (int i = 0; i < 5; i++) // getting the matrix
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    if (matrix[2][2] != 1) // checking if 1 is already in the middle
    {
        for (int i = 0; i < 5; i++) // going through the matrix to find the 1
        {
            for (int j = 0; j < 5; j++)
            {
                if (matrix[i][j] == 1) // getting number of moves once we find the 1
                {
                    moves = abs(i - 2) + abs(j - 2); // using absolute value
                }
            }
        }
    }

    std::cout << moves; // outputting number of moves

    return 0;
}