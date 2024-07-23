// Delete Elements
// Problem Description
// Given an integer array A of size N.
// Find the minimum number of elements that need to be removed such that the
// GCD of the resulting array becomes 1.

// If not possible then return -1.
  
// Problem Constraints
// 1 <= N <= 100000
// 1 <= A[i] <= 1e9
 
// Input Format
// Input contains a single integer array A
 
// Output Format
// Return an integer

// Example Input
// Input 1:
// A = [7, 2, 5]
 

// Example Output
// Output 1:
// 0

// Example Explanation
// Explanation 1:
// GCD of the array A is 1.
// so, the number of elements to be removed is 0.

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  // Handle base case
  if (b == 0) {
    return a;
  }

  // Recursive case: GCD(a, b) = GCD(b, a % b)
  return gcd(b, a % b);
}

int minElementsToRemove(int A[], int N) {
  // Find the GCD of all elements in A
  int g = A[0];
  for (int i = 1; i < N; i++) {
    g = gcd(g, A[i]);
  }

  // If GCD is already 1, no elements need removal
  if (g == 1) {
    return 0;
  }

  // Check if any element is not divisible by GCD
  for (int i = 0; i < N; i++) {
    if (A[i] % g != 0) {
      return -1; // Not possible to achieve GCD of 1
    }
  }

  // All elements are divisible by GCD, so remove any N-1 elements (all except one)
  return N - 1;
}

int main() {
  int N;

  cout << "Enter the size of the array (N): ";
  cin >> N;

  int A[N];

  cout << "Enter the elements of the array  ";
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int result = minElementsToRemove(A, N);

  if (result == -1) {
    cout << "Not possible to achieve GCD of 1." << endl;
  } else {
    cout << "Minimum number of elements to remove: " << result << endl;
  }

  return 0;
}
