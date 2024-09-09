// Given array of size N. count no of pairs (i,j) such that ar[i] + ar[j]==k  Note => i!=j or i<j
//  2 4 -3 7

#include <iostream>
using namespace std;

int totalPairSums(int a[], int n, int k)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Value of K : ";
    cin >> k;
    cout << "Total pairs : " << totalPairSums(arr, n, k) << endl;
    return 0;
}