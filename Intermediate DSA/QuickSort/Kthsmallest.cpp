#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int randomIdx = arr[(low + high) / 2];
    swap(arr[randomIdx], arr[high]);
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int quickSort(vector<int> &arr, int low, int high, int k)
{
    if (low <= high)
    {
        int pi = partition(arr, low, high);
        if (pi == k - 1)
        {
            return arr[pi];
        }
        else if (pi > k - 1)
        {
            return quickSort(arr, low, pi - 1, k);
        }
        else
        {
            return quickSort(arr, pi + 1, high, k);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<int> A;
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        A.push_back(val);
    }
    int k;
    cout << "Enter K : ";
    cin >> k;
    int low = 0, high = n - 1;

    if (k > 0 && k <= n)
    {
        int kth = quickSort(A, low, high, k);
        cout << "Kth smallest element: " << kth << endl;
    }
    else
    {
        cout << "K is out of bounds of the array length." << endl;
    }

    return 0;
}