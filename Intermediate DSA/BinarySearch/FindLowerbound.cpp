// Given a sorted integer array and an integer X. find the lower bound of x;

#include <iostream>
using namespace std;

// lower bound
// int findLowerBound(int a[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > x)
//         {
//             return a[i - 1];
//         }
//     }
//     return -1;
// }

// Higher bound
// int findHigherBound(int a[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > x)
//         {
//             return a[i];
//         }
//     }
//     return -1;
// }

void lowBound(int a[], int n, int x)
{
    int s = 0, e = n - 1;
    bool flag = false;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == x)
        {
            flag = true;
            cout << a[mid - 1];
            break;
        }
        else if (a[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << a[e];
    }
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the ele : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter value X : ";
    cin >> x;
    // cout << "Lower bound : " << findLowerBound(arr, n, x) << endl;
    cout << "Lower bound : ";
    lowBound(arr, n, x);

    return 0;
}