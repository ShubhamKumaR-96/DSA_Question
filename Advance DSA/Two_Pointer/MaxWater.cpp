#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& A) {
    int left = 0;
    int right = A.size() - 1;
    int maxArea = 0;

    while (left < right) {
        // Calculate the current area
        int height = min(A[left], A[right]);
        int width = right - left;
        int currentArea = height * width;

        // Update max area if current is larger
        maxArea = max(maxArea, currentArea);

        // Move the smaller height pointer
        if (A[left] < A[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
    vector<int> A1 = {1, 5, 4, 3};
    cout << "Maximum Area (Example 1): " << maxArea(A1) << endl;

    vector<int> A2 = {1};
    cout << "Maximum Area (Example 2): " << maxArea(A2) << endl;

    return 0;
}
