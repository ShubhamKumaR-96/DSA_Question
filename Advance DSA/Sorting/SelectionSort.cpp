// Selection Sort

#include <iostream>
using namespace std;

// void selectionSort(int a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIdx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[minIdx])
//             {
//                 minIdx = j;
//             }
//         }
//         swap(a[minIdx], a[i]);
//     }
// }

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// stable selection sort

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i; 
        bool sorted = true;  // Add a flag to check if array is already sorted
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIdx])
            {
                minIdx = j;
                sorted = false;  // If we find a smaller element, mark as not sorted
            }
        }
        if (sorted)  
            break;

         // Insert the minimum element in the correct position by shifting
        int minVal = a[minIdx];
        while (minIdx > i)
        {
            a[minIdx] = a[minIdx - 1];
            minIdx--;
        }
        a[i] = minVal;
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
    cout << "After selection sort" << endl;
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}