// Given an array of size N initialized with 0. Given Q quries of index (i) & value (v)
// Add the given value to all the index >=i. Return the final state of the array

// Asked in MS

#include <iostream>
using namespace std;

void printFinalArr(int A[], int n, int q)
{
    int ps[n + 1] = {0};

    while (q--)
    {
        int startIdx, value;
        cout << "StartIdx and value : ";
        cin >> startIdx >> value;
        ps[startIdx] += value;
    }
    A[0] = ps[0];
    for (int i = 1; i < n; i++)
    {
        A[i] = A[i - 1] + ps[i];
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
    printFinalArr(arr, n, q);
    printArr(arr, n);
}