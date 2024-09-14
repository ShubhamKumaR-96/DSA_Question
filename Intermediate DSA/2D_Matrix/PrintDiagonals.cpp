// Print Diagonals of matrix

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the row size : ";
    cin >> n;
    cout << "Enter the col size : ";
    cin >> m;
    int arr[n][m];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Input each element
        }
    }
    cout << "Printing diagonals left to right" << endl;
    int i = 0;
    while (i < n)
    {
        cout << arr[i][i] << " ";
        i++;
    }
    cout << endl;
    cout << "Printing diagonals right to left" << endl;
    int row = 0, col = n - 1;
    while (row < n && col >= 0)
    {
        cout << arr[row][col] << " ";
        row++;
        col--;
    }
}