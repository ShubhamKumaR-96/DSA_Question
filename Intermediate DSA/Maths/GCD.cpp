// Greatest Common Divisor
// Given 2 non negative integers m and n,
// find gcd(m, n) GCD of 2 integers m and n is defined as the greatest integer g such that
// g is a divisor of both m and n. Both m and n fit in a 32 bit signed integer.

// Example
// m : 6
// n : 9

// GCD(m, n) : 3 do in c++

// Show drafts

#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    // Handle base cases (when one number is zero)
    if (m == 0)
    {
        return n;
    }
    else if (n == 0)
    {
        return m;
    }

    // Recursive case: GCD(m, n) = GCD(n, m % n)
    // We can use either m % n or n % m as long as both numbers are positive
    return gcd(n, m % n);
}

int main()
{
    int m, n;

    cout << "Enter two non-negative integers (m and n): ";
    cin >> m >> n;

    int result = gcd(m, n);

    cout << "GCD(" << m << ", " << n << ") = " << result << endl;

    return 0;
}
