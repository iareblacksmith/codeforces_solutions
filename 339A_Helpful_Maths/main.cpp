// 339A_Helpful_Maths
#include <iostream>
#include <string>

int main()
{
    std::string sum = "null";                 // declaring sum string
    std::cin >> sum;                          // getting string
    for (int i = 2; i < sum.length(); i += 2) // looping through index in 2s
    {
        if (sum[i] < sum[i - 2]) // comparing to the number before
        {
            char temp = sum[i];
            sum[i] = sum[i - 2];
            sum[i - 2] = temp;
            i = 0; // resetting index to 0
        }
    }
    std::cout << sum; // outputting reordered string
    return 0;
}