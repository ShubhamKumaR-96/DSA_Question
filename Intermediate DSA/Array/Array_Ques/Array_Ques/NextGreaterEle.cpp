// Given an array with size N,count numbers of elements that have atleast 1 greater than itself
// 3 -2 6 8 4 8 5     i/p => 2 5 1 4 8 0 8 1 3 8

#include <iostream>
#include <climits>
using namespace std;

int nextGreaterEle(int ar[], int n)
{
    int maxNo = INT_MIN;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > maxNo)
        {
            maxNo = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == maxNo)
            cnt++;
    }

    int ans = (n - cnt);
    return ans;
}

// using single loop

int greaterItself(int a[], int n)
{
    int maxNo = INT_MIN;
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNo)
        {
            maxNo = a[i];
            freq = 1;
        }
        else if (a[i] == maxNo)
        {
            freq++;
        }
    }
    return (n - freq);
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
    cout << "Total Greater Element : " << greaterItself(arr, n) << endl;
    return 0;
}