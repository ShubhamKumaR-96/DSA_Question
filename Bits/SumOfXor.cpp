// Given an array of non -ve numbers. calculate the sum of xor of all possible pairs
// arr 3 5 6 8

#include <iostream>
using namespace std;

int xorSums(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans += a[i] ^ a[j];
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total Xor sum : " << xorSums(arr, n) << endl;
    return 0;
}