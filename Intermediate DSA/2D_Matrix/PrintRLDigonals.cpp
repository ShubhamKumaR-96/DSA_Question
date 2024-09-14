// Given matrix [n][m] print Right to left diagonals

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
    cout << "Printing All diagonals from right" << endl;
    for (int j = 0; j < m; j++)
    {
        int x = 0, y = j;
        while (x < n && y >= 0)
        {
            cout << arr[x][y] << " ";
            x++;
            y--;
        }
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        int x = 1, y = m - 1;
        while (x < n && y >= 0)
        {
            cout << arr[x][y] << " ";
            x++;
            y--;
        }
    }
}