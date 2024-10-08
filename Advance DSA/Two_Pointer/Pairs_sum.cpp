#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int pairsWithGivenSum(vector<int>& A, int B) {
    int left = 0, right = A.size() - 1;
    long long count = 0;

    while (left < right) {
        int sum = A[left] + A[right];

        if (sum == B) {
            // Case where both elements are the same
            if (A[left] == A[right]) {
                long long numElements = right - left + 1;
                count += (numElements * (numElements - 1)) / 2; // Combination formula nC2
                count %= MOD;
                break;
            }

            // Count the number of occurrences of A[left]
            int leftCount = 1;
            while (left + 1 < right && A[left] == A[left + 1]) {
                left++;
                leftCount++;
            }

            // Count the number of occurrences of A[right]
            int rightCount = 1;
            while (right - 1 > left && A[right] == A[right - 1]) {
                right--;
                rightCount++;
            }

            // Add the number of pairs
            count += (long long)leftCount * rightCount;
            count %= MOD;

            left++;
            right--;
        } else if (sum < B) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    // Example 1
    vector<int> A1 = {1, 1, 1};
    int B1 = 2;
    cout << "Number of pairs (Example 1): " << pairsWithGivenSum(A1, B1) << endl;

    // Example 2
    vector<int> A2 = {1, 5, 7, 10};
    int B2 = 8;
    cout << "Number of pairs (Example 2): " << pairsWithGivenSum(A2, B2) << endl;

    return 0;
}
