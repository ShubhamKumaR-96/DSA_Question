// Print Maximum col sum

#include <iostream>
#include <algorithm>
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
    cout << "The maximum col sum :" ;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
           
        }
         ans = max(ans, sum);
    }
    cout << ans << endl;
}