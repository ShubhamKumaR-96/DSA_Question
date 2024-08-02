// Trailing Zeros in Factorial

// Problem Description
// Given an integer n, return the number of trailing zeroes in n!.
// Note: Your solution should be in logarithmic time complexity.


// Problem Constraints
// 1 <= n <= INT_MAX


// Input Format
// First and only argument is single integer n


// Output Format
// Return single integer denoting number of zeroes.


// Example Input
// n = 5


// Example Output
// 1


// Example Explanation
// n! = 120 Number of trailing zeros = 1 So, return 1

#include <iostream>

using namespace std;

int trailingZeroes(int n) {
    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << trailingZeroes(n) << endl;
    return 0;
}
