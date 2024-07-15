#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    cin >> key;
    cout << "key value : " << linearSearch(arr, n, key) << endl;
    return 0;
}