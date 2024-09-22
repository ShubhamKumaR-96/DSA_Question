// Bubble sort
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

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                cnt++;
            }
        }
        if (cnt == 0)
            break;
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
    cout << "After bubble Sorting" << endl;
    bubbleSort(arr, n);
    printArr(arr, n);

    return 0;
}