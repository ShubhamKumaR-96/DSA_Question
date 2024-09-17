// given a matrix of size n*m and q quries, for each query, find sum of given submatrix
//  Note => TL is top left and BR is bottom right
// Ask in Google

#include <iostream>
#include <vector>
using namespace std;

void buildPrefixSumMat(vector<vector<int>>& mat, vector<vector<int>>& ps)
{
    int n = mat.size();
    int m = mat[0].size();

    // initiliaze ps sum for sub matrix
    ps = vector<vector<int>>(n, vector<int>(m, 0));

    // building ps sum of subMatrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ps[i][j] = mat[i][j];
            if (i > 0)
                ps[i][j] += ps[i - 1][j];
            if (j > 0)
                ps[i][j] += ps[i][j - 1];
            if (i > 0 && j > 0)
                ps[i][j] -= ps[i - 1][j - 1];
        }
    }
}

int subMatrixSum(vector<vector<int>>& ps, int TL_row, int TL_col, int BR_row, int BR_col)
{
    int sum = ps[BR_row][BR_col];

    if (TL_row > 0)
        sum -= ps[TL_row - 1][BR_col];
    if (TL_col > 0)
        sum -= ps[BR_row][TL_col - 1];
    if (TL_row > 0 && TL_col)
        sum += ps[TL_row - 1][TL_col - 1];

    return sum;
}

int main()
{
    int n, m;
    cout << "Enter row col : ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m, 0));
    cout << "Entering element : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> ps;
    buildPrefixSumMat(mat, ps);

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--)
    {
        int tl_row, tl_col, br_row, br_col;
        cout << "Enter top-left (TL_row, TL_col) and bottom-right (BR_row, BR_col) coordinates (0-based indexing): ";
        cin >> tl_row >> tl_col >> br_row >> br_col;

        int result = subMatrixSum(ps, tl_row, tl_col, br_row, br_col);
        cout << "Sum of submatrix: " << result << endl;
    }
    return 0;
}