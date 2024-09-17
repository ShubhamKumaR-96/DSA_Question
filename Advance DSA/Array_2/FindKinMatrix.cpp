// Given a matrix where all rows and cols (n*m) are sorted in asc sorder.
// given a no K return true if K is present in the matrix

#include <iostream>
#include <vector>
using namespace std;

bool findK(vector<vector<int>> &mat, int k)
{
    int n = mat.size();
    int m = mat[0].size();
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == k)
            return true;
        if (mat[i][j] > k)
            j--;
        if (mat[i][j] < k)
            i++;
    }
    return false;
}

int main()
{
    int n, m;
    cout << "Enter row and col : ";
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
    int k;
    cout << "Enter K val : ";
    cin >> k;
    if (findK(mat, k))
    {
        cout << "K is present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}