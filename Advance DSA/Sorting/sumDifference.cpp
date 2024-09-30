#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

// Function to calculate 2^exp % MOD using binary exponentiation
int powerOfTwo(int exp, int mod) {
    long long result = 1, base = 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute the sum of differences between the largest and smallest element
// in all subsequences
int sumTheDifference(vector<int>& A) {
    int n = A.size();
    
    // Sort the array to easily calculate the contributions of each element
    sort(A.begin(), A.end());
    
    // Precompute powers of two modulo MOD
    vector<long long> pow2(n);
    for (int i = 0; i < n; ++i) {
        pow2[i] = powerOfTwo(i, MOD);
    }
    
    long long result = 0;
    
    // Calculate the contribution of each element as both smallest and largest
    for (int i = 0; i < n; ++i) {
        result = (result + A[i] * (pow2[i] - pow2[n-i-1] + MOD) % MOD) % MOD;
    }
    
    return result;
}

// Main function to take input and print the result
int main() {
    // Sample input
    vector<int> A = {3, 5, 10};
    
    // Call the function and output the result
    cout << "The sum of differences is: " << sumTheDifference(A) << endl;
    
    return 0;
}
