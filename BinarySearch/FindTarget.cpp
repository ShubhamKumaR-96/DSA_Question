#include <iostream>
using namespace std;

int findTarget(int a[], int n, int target)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == target)
        {
            return mid;
        }
        else if (target > a[mid])
        {
            start = mid + 1;
        }
        else if (target < a[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target Value : ";
    cin >> target;
    int ansIndex = findTarget(arr, n, target);
    if (ansIndex == -1)
    {
        cout << "Element not found " << endl;
    }
    else
    {
        cout << "Element found at Index : " << ansIndex << endl;
    }

    return 0;
}