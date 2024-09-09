// Divisor game
// Problem Description
// Scooby has 3 three integers A, B and C. Scooby calls a positive integer
// special if it is divisible by B and it is divisible by C.
// You need to tell number of special integers less than or equal to A.

// Problem Constraints
// 1<=A,B,C<=1000000000

// Input Format
// A positive integer A
// A positive integer B
// A positive integer C

// Output Format
// One integer corresponding to the number of special integers less than or equal to A.

// Example Input
// A=12, B=3, C=2

// Example Output
// 2
// Example Explanation
// The two integers divisible by 2 and 3 and less than or equal to 12 are 6,12.

#include <iostream>

using namespace std;

bool aliceWins(int n)
{
    // Alice wins if the number is even
    return n % 2 == 0;
}

int main()
{
    int n;

    cout << "Enter the starting number (n): ";
    cin >> n;

    if (aliceWins(n))
    {
        cout << "Alice wins the game." << endl;
    }
    else
    {
        cout << "Bob wins the game." << endl;
    }

    return 0;
}
