#include <iostream>
#include <vector>
#include <limits.h>  // For INT_MIN

using namespace std;

int findSecondLargest(vector<int>& A) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < A.size(); i++) {
        if (A[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = A[i];  // Update largest
        } 
        else if (A[i] > secondLargest && A[i] != largest) {
            secondLargest = A[i];  // Update second largest
        }
    }

    // If secondLargest hasn't been updated, return -1 (no second largest exists)
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    vector<int> A = {2, 1, 2}; // Example input

    int result = findSecondLargest(A);
    cout << "The second largest element is: " << result << endl;

    return 0;
}
