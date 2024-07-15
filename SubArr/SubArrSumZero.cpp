// Find array of there exists a subarray whose sum =0
// arr 2 4 -3 1 3 -2 1 -5 7 2

#include <iostream>
using namespace std;

bool subArrSums(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            if (currSum == 0)
            {
                return true;
            }
        }
    }
    return false;
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
    if (subArrSums(arr, n))
    {
        cout << "1" << endl; // Indicates that there is a subarray with sum 0
    }
    else
    {
        cout << "0" << endl; // Indicates that there is no subarray with sum 0
    }
    return 0;
}