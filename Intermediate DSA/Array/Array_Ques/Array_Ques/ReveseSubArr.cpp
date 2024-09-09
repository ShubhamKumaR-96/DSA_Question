// Given array N . reverse subarray to given start and end
// arr 4 2 10 3 12 -2 15

#include <iostream>
using namespace std;

void reverSubArr(int a[], int n, int s, int e)
{
    while (s < e)
    {
        int t = a[s];
        a[s] = a[e];
        a[e] = t;
        s++;
        e--;
    }
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
    int startIdx, endIdx;
    cin >> startIdx >> endIdx;
    cout << "startIdx : " << startIdx << " " << "EndIdx : " << endIdx << endl;
    reverSubArr(arr, n, startIdx, endIdx);
    printArr(arr, n);
    return 0;
}