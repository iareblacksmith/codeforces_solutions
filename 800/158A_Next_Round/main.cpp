#include <iostream>

int main()
{
    int n = 0;                  // number of participants
    int k = 0;                  // k-th place (will advance to next round)
    int pass = 0;               // number of participants that will advance
    std::cin >> n >> k;         // getting n and k
    int scores[n];              // declaring array of scores
    for (int i = 0; i < n; i++) // main loop
    {
        for (int j = 0; j < n; j++) // getting participant scores loop
        {
            std::cin >> scores[j];
        }
        if (scores[i] >= scores[k - 1] && scores[i] > 0) // checking who advances
        {
            pass++; // incrementing
        }
    }
    std::cout << pass; // outputting final number of advancing participants
    return 0;
}