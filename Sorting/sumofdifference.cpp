#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007  // Define the modulo constant
using namespace std;

int sumofDiff(vector<int>& A) {
    int n = A.size();
    
    // Sort the array to facilitate subsequence calculations
    sort(A.begin(), A.end());
    
    // Precompute powers of 2 modulo 1e9 + 7
    vector<long long> pow2(n);
    pow2[0] = 1;
    for (int i = 1; i < n; i++) {
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }

    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        // Calculate the contribution of A[i] as both max and min
        // pow2[i] - represents A[i] being the max
        // pow2[n-1-i] - represents A[i] being the min
        totalSum = (totalSum + (A[i] * (pow2[i] - pow2[n-1-i] + MOD)) % MOD) % MOD;
    }
    
    return totalSum;
}

int main() {
    int n;
    cout << "Enter size N: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int result = sumofDiff(A);
    cout << "Sum of differences: " << result << endl;
    return 0;
}
