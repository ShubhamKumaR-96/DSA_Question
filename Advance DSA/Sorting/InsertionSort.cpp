// Insertion Sort

#include <iostream>
using namespace std;

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j >= 0 && a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
            j--;
        }
    }
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
    cout << "Original Array" << endl;
    printArr(arr, n);
    cout << "Insertion Array" << endl;
    insertionSort(arr, n);
    printArr(arr, n);
}