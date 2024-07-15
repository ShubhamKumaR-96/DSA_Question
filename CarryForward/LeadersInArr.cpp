// Leaders in an array
// Given an arr[n], you have to count leaders in arr[]
// An ele is leader if it is strictly greater than max of elements in its right
// arr 15 -1 7 2 5 4 2 3

#include <iostream>
using namespace std;

int rightMaxGreater(int arr[], int n)
{
    int count = 1;
    int maxEle = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxEle)
        {
            count++;
            maxEle = arr[i];
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Right max total greater elements : " << rightMaxGreater(arr, n) << endl;

    return 0;
}