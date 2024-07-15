#include <iostream>
using namespace std;

void reverseArr(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reversingKTimes(int arr[], int n, int k)
{
    k = k % n;
    // Reversing array from 0 to K
    reverseArr(arr, 0, n - k - 1);
    // Reversing array from k to n-1
    reverseArr(arr, n - k, n - 1);
    // Reversing entire array
    reverseArr(arr, 0, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    reversingKTimes(arr, n, k);
    cout << "Printing Reverse Array " << endl;
    printArray(arr, n);

    return 0;
}