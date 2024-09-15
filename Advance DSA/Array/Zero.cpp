// given array size N all the elements are equal to 0. You have given queries add value to all
// elements from index to n-1

// Google interview question

#include <iostream>
using namespace std;

void finalArr(int A[], int n, int q)
{
    while (q--)
    {
        int startIdx, endIdx, value;
        cout << "startIdx, endIdx, Val : ";
        cin >> startIdx >> endIdx >> value;

        A[startIdx] += value; // Add value to startIdx
        if (endIdx + 1 < n)
        {
            A[endIdx + 1] -= value; // Subtract value from endIdx + 1 if within bounds
        }
    }

    // Build the prefix sum array in the original array itself
    for (int i = 1; i < n; i++)
    {
        A[i] += A[i - 1];
    }
}
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size N: ";
    cin >> n;

    int arr[n] = {0}; // Initialize the array with 0
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    finalArr(arr, n, q);
    printArr(arr, n);
}