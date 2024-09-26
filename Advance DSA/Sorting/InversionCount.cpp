//  Asked in Google,Amazon,netflix,facebook
// # => Inversion count   arr= 10 3 8 15 6 12 2 18 7 1
// Given an array of size N. count the no of i,j pairs such that i<j & A[i]>A[j];

#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int inv_cnt = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_cnt += (mid - i + 1);
        }
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];

    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return inv_cnt;
}

// Function to recursively apply merge sort and count inversions
int mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right)
{
    int inv_cnt = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        inv_cnt += mergeSortAndCount(arr, temp, left, mid);
        inv_cnt += mergeSortAndCount(arr, temp, mid + 1, right);
        inv_cnt += mergeAndCount(arr, temp, left, mid, right);
    }
    return inv_cnt;
}

// Main function to count inversions
int inversionCount(vector<int> &v)
{
    int n = v.size();
    vector<int> temp(n);
    return mergeSortAndCount(v, temp, 0, n - 1);
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> v;
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    int ans = inversionCount(v);
    cout << "Total Inversion : " << ans;
}