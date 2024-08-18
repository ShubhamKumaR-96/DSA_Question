// Given an array of non -ve numbers.calculate the sum of xor of all possible pairs
// arr={3 5 6 8}

#include <iostream>
using namespace std;

int xorSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + (a[i] ^ a[j]);
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total Sum : " << xorSum(arr, n) << endl;
    return 0;
}