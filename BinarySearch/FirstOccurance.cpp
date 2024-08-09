// Find First Occurance of numbers in a Sorted Array.

#include <iostream>
using namespace std;

// find first Occurance
int firstOccurance(int a[], int n, int target)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (a[mid] == target)
        {
            ans = mid;
            // Continue searching in the left half
            end = mid - 1;
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
    return ans;
}

// find last occurance
int lastOccurance(int a[], int n, int target)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (a[mid] == target)
        {
            ans = mid;
            // Continue searching in the left half
            start = mid + 1;
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
    return ans;
}

// Total Occurance

int totalOccurance(int a[], int n, int target)
{
    int firstOcc = firstOccurance(a, n, target);
    int lastOcc = lastOccurance(a, n, target);
    int totalOcc = (lastOcc - firstOcc) + 1;
    return totalOcc;
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

    // total Occcurance
    int totalOcc = totalOccurance(arr, n, target);
    cout << "Total Occurance : " << totalOcc << endl;

    // int ansIndex = firstOccurance(arr, n, target);
    // int ansIndex = lastOccurance(arr, n, target);

    // if (ansIndex == -1)
    // {
    //     cout << "First Occurance Not found" << endl;
    // }
    // else
    // {
    //     cout << "First Occurance found at Index : " << ansIndex << endl;
    // }

    return 0;
}