#include <iostream>
using namespace std;

int binarySearchKey(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid; // key found
        }
        else if (arr[mid] < key) // 2nd half
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key : ";
    cin >> key;

    cout << binarySearchKey(arr, n, key) << endl;

    return 0;
}