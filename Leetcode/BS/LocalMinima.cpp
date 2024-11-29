// Given an unsorted array of N. distinct elements. find any one of the local minima
// Note => Elements are adjacents  arr = 9 8 7 3 6 4 1 5 2

#include <iostream>
using namespace std;

int localMinima(int arr[], int n)
{

    //    Edge case: If array has only one element, it's trivially a local minima
    if (n == 1)
        return arr[0];
    if (arr[0] < arr[1])
        return arr[0];
    if (arr[n - 1] < arr[n - 2])
        return arr[n - 1];
    int start = 1, end = n;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = localMinima(arr, n);
    if (ans != -1)
    {
        cout << "Local Minima : " << ans << endl;
    }
    else
    {
        cout << "Local minima not found" << endl;
    }
    return 0;
}