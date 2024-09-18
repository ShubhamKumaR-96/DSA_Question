// Given an unsorted array of integers. find the first missing natural number
// A[5]={3 -2 1 2 7}

#include <iostream>
using namespace std;

int findMissNo(int a[], int n)
{
    // change value <=0 to n+1
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
            a[i] = n + 1;
    }
    // mark the presence
    for (int i = 0; i < n; i++)
    {
        if (a[i] < n)
        {
            int x = abs(a[i]);
            int idx = x - 1;
            a[idx] = -1 * abs(a[idx]);
        }
    }
    // find first +ve number
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "First missing Natural N0 : " << findMissNo(arr, n) << endl;
    return 0;
}