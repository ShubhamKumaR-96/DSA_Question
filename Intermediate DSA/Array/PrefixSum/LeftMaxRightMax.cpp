// Given array of size N. Return 2 Arrays left max and right max

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findLeftRightMax(int a[], int n, vector<int> &leftMax, vector<int> &rightMax)
{
    leftMax[0] = a[0];
    rightMax[n - 1] = a[n - 1];

    // filling leftMax Array
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], a[i]);
    }
    // filling rightMax Array
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], a[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the size N: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> leftMax(n), rightMax(n);
    findLeftRightMax(arr, n, leftMax, rightMax);

    cout << "Printing leftMax array : ";
    for (int i = 0; i < n; i++)
    {
        cout << leftMax[i] << " ";
    }
    cout << endl;
    cout << "Printing rightmax array : ";
    for (int i = 0; i < n; i++)
    {
        cout << rightMax[i] << " ";
    }
    return 0;
}