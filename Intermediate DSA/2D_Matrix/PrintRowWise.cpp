// Given  mat[N][M] print row wise

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
     cout << "The 2D array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; // Print each element
        }
        cout << endl; // Move to the next row
    }
}