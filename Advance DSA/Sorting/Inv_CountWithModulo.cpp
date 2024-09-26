#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

long long mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int mid, int right)
{
    int i = left;    // Initial index of the left subarray
    int j = mid + 1; // Initial index of the right subarray
    int k = left;    // Initial index to be sorted
    long long inv_count = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = (inv_count + (mid - i + 1)) % MOD; // Count inversions
        }
    }

    // Copy remaining elements from the left subarray, if any
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the right subarray, if any
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    // Copy sorted subarray into original array
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right)
{
    long long inv_count = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        inv_count = (inv_count + mergeSortAndCount(arr, temp, left, mid)) % MOD;
        inv_count = (inv_count + mergeSortAndCount(arr, temp, mid + 1, right)) % MOD;

        inv_count = (inv_count + mergeAndCount(arr, temp, left, mid, right)) % MOD;
    }
    return inv_count;
}

int countInversions(vector<int> &A)
{
    int n = A.size();
    vector<int> temp(n);
    return mergeSortAndCount(A, temp, 0, n - 1);
}

int main()
{
    vector<int> A = {3, 4, 1, 2};
    cout << "Number of inversions: " << countInversions(A) << endl;
    return 0;
}
