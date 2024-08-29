// 50A_Domino_piling
#include <iostream>

int main()
{
    int m = 0, n = 0;   // dimensions of board
    int d = 0;          // number of dominos to fill board
    std::cin >> m >> n; // getting board dimensions
    // logic for finding max number of dominos to fill grid
    // NOTE: decimals will be discarded (what we want) because data type is int
    d = (m * n) / 2; // finding out how many "2s" are in the grid
    std::cout << d;  // outputting max number of dominos
    return 0;
}