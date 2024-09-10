
#include <iostream>
using namespace std;

void reverseArr(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        // swapping 
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
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
    cout << "Enter N :";
    cin >> n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArr(arr, n);
    printArr(arr, n);
    return 0;
}