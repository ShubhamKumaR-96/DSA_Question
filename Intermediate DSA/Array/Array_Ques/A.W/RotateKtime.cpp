// Given an integer array A of size N and an integer B, you have to print the same array after
// rotating it B times towards the right.

// Problem Constraints
// 1 <= N <= 106
// 1 <= A[i] <=108
// 1 <= B <= 109

// Input Format
// There are 2 lines in the input

// Line 1: The first number is the size N of the array A. Then N numbers follow which indicate
// the elements in the array A.

// Line 2: A single integer B.

// Output Format
// Print array A after rotating it B times towards the right.

// Example Input
// Input 1 :
// 4 1 2 3 4
// 2

// Example Output
// Output 1 :
// 3 4 1 2

// Example Explanation
// Example 1 :

// N = 4, A = [1, 2, 3, 4] and B = 2.

// Rotate towards the right 2 times - [1, 2, 3, 4] => [4, 1, 2, 3] => [3, 4, 1, 2]

// Final array = [3, 4, 1, 2]

#include <iostream>
using namespace std;

void reverseArr(int a[], int i, int j)
{
    while (i < j)
    {
        // swapping
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
}

void rotateBtimes(int arr[], int n, int k)
{
    k = k % n;
    reverseArr(arr, 0, n - 1);
    reverseArr(arr, 0, k - 1);
    reverseArr(arr, k, n - 1);
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
    int k;
    cout << "Value of K : ";
    cin >> k;
    k = k % n;
    rotateBtimes(arr, n, k);

    printArr(arr, n);
}