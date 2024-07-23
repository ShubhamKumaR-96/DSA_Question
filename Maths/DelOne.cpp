// Delete one
// Problem Description
// Given an integer array A of size N. You have to delete one element such that the
// GCD(Greatest common divisor) of the remaining array is maximum.

// Find the maximum value of GCD.

// Problem Constraints
// 2<=N<=100000
// 1<=A[i]<=10^9

// Input Format
// First argument is an integer array A.

// Output Format
// Return an integer denoting the maximum value of GCD.

// Example Input
// A=[12,15,18]

// Example Output
//  6

// Example Explanation
// If you delete 12, gcd will be 3.
// If you delete 15, gcd will be 6.
// If you delete 18, gcd will 3.
// Maximum vallue of gcd is 6.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    // Handle base case
    if (b == 0)
    {
        return a;
    }

    // Recursive case: GCD(a, b) = GCD(b, a % b)
    return gcd(b, a % b);
}

int maxGcdAfterDeletion(const vector<int> &A)
{
    int N = A.size();
    int max_gcd = 1;

    // Iterate over the array and remove each element in turn
    for (int i = 0; i < N; i++)
    {
        // Create a temporary array excluding the current element
        vector<int> temp(A.begin(), A.end());
        temp.erase(temp.begin() + i);

        // Calculate GCD of the remaining elements
        int current_gcd = temp[0];
        for (int j = 1; j < temp.size(); j++)
        {
            current_gcd = gcd(current_gcd, temp[j]);
        }

        // Update max_gcd if the current GCD is greater
        max_gcd = max(max_gcd, current_gcd);
    }

    return max_gcd;
}

int main()
{
    int N;

    cout << "Enter the size of the array (N): ";
    cin >> N;

    vector<int> A(N);

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int result = maxGcdAfterDeletion(A);

    cout << "Maximum GCD after deleting one element: " << result << endl;

    return 0;
}
