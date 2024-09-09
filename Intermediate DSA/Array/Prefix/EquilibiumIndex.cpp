// Given an array of size N. find equilibrium index (find index whose sum of left and right element equal) arr= 1 2 3 4 8 10  arr= -7 1 5 2 -4 3 0

#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n)
{
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int leftSum = ps[i - 1];
        int rightSum = ps[n - 1] - ps[i];
        if (leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
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
    cout << "Equlibrium index : " << findEquilibriumIndex(arr, n) << endl;

    return 0;
}