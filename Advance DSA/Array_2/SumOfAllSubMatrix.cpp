// given a matrix of size n*n. Return the sum of all possiblr sub-matrix

#include <iostream>
#include <vector>
using namespace std;

// using contribution technique
int allPossibleSum(vector<vector<int>> &mat, int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Calculate the number of submatrices that include matrix[i][j]
            int topLeftChoice = (i + 1) * (j + 1);
            int bottomRightChoice = (n - i) * (n - j);

            // Contribution of matrix[i][j] to the sum of all submatrices
            totalSum += mat[i][j] * topLeftChoice * bottomRightChoice;
        }
    }
    return totalSum;
}

// brute force 
int sumAllSubmatrices(vector<vector<int>>& matrix, int n) {
    int totalSum = 0;

    // Loop over all possible top-left corners (TL_row, TL_col)
    for (int TL_row = 0; TL_row < n; TL_row++) {
        for (int TL_col = 0; TL_col < n; TL_col++) {

            // Loop over all possible bottom-right corners (BR_row, BR_col)
            for (int BR_row = TL_row; BR_row < n; BR_row++) {
                for (int BR_col = TL_col; BR_col < n; BR_col++) {

                    // Calculate the sum of the current submatrix
                    int submatrixSum = 0;
                    for (int i = TL_row; i <= BR_row; i++) {
                        for (int j = TL_col; j <= BR_col; j++) {
                            submatrixSum += matrix[i][j];
                        }
                    }

                    // Add the sum of the current submatrix to totalSum
                    totalSum += submatrixSum;
                }
            }
        }
    }

    return totalSum;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int ans = allPossibleSum(mat, n);
    cout << "Total sum : " << ans << endl;
    return 0;
}
