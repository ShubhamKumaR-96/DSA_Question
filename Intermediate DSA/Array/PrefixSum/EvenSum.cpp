#include <iostream>
#include <vector>
using namespace std;

vector<int> countEvenNumbers(vector<int>& A, vector<vector<int>>& B) {
    int n = A.size();
    vector<int> prefixEven(n, 0);

    // Calculate the prefix sum for even numbers
    prefixEven[0] = (A[0] % 2 == 0) ? 1 : 0;
    for (int i = 1; i < n; i++) {
        prefixEven[i] = prefixEven[i - 1] + ((A[i] % 2 == 0) ? 1 : 0);
    }

    // Answer each query using the prefixEven array
    vector<int> result;
    for (int i = 0; i < B.size(); i++) {
        int l = B[i][0];
        int r = B[i][1];
        
        if (l == 0) {
            result.push_back(prefixEven[r]);
        } else {
            result.push_back(prefixEven[r] - prefixEven[l - 1]);
        }
    }

    return result;
}

int main() {
    // Example Input
    vector<int> A = {1, 2, 3, 4, 5};
    vector<vector<int>> B = {{0, 2}, {2, 4}, {1, 4}};
    
    // Get the result for each query
    vector<int> result = countEvenNumbers(A, B);
     // Output the result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

 
