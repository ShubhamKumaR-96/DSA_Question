#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int findMaxMinSum(vector<int>& A) {
    int maxElement = A[0];
    int minElement = A[0];

    // Traverse the array to find the max and min element
    for (int i = 1; i < A.size(); i++) {
        maxElement = max(maxElement, A[i]);
        minElement = min(minElement, A[i]);
    }

    // Return the sum of the max and min elements
    return maxElement + minElement;
}

int main() {
    vector<int> A = {-2, 1, -4, 5, 3}; // Example input

    int result = findMaxMinSum(A);
    cout << "The sum of the maximum and minimum elements is: " << result << endl;

    return 0;
}
