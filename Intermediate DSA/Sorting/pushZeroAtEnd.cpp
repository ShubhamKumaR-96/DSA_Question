// push zeros to end while maintaiing the relative ordet of theother elements
// 5 0 1 2 0 0 4 0 3

#include <iostream>
using namespace std;

void pushZeroEndOrder(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] == 0)
            {
                swap(ar[j], ar[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin>>n;
    int arr[n];
    cout << "Enter element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pushZeroEndOrder(arr, n);
    printArr(arr, n);
    return 0;
}