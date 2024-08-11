// Find Missing element in Sorted Array

#include <iostream>
using namespace std;

int findMissingNo(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // Check if the middle element is at its correct position
        if (arr[mid] == mid + 1)
        {
            // Missing number is to the right
            start = mid + 1;
        }
        else
        {
            return mid + 1; // Missing number is the current index + 1
        }
        mid = start + (end - start) / 2;
    }
    // If we reach here, it means there's no missing number (error condition)
    return -1;
}

int main()
{
    int n;
    cout << "Enter the value Of N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing No is : " << findMissingNo(arr, n) << endl;

    return 0;
}