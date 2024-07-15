// Find no of triplets i , j ,k such that i<j<K && arr[i]<arr[j]<arr[k]
// arr 3 4 6 9 2

#include <iostream>
using namespace std;

int findTriplets(int arr[], int n)
{
    int cnt = 0;
    for (int j = 1; j < n - 1; j++)
    {
        // j is middle elements
        int left = 0;
        // left = no of elements less than arr[j] < [0,j-1]
        for (int i = 0; i < j; i++)
        {
            if (arr[i] < arr[j])
            {
                left++;
            }
        }
        // right = no of elements greater than arr[j],[j+1,n-1];
        int right = 0;
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] > arr[j])
            {
                right++;
            }
        }
        cnt = cnt + (left * right);
    }
    return cnt;
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
    cout << "Triplets " << findTriplets(arr, n) << endl;

    return 0;
}