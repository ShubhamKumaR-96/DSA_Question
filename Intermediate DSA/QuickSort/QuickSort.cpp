// Quick sort

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int randomIdx=arr[(low+high)/2];
    swap(arr[randomIdx],arr[high]);
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

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, low + pi, high);
    }
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
    int low = 0, high = n - 1;
    cout << "After Quick sort" << endl;
    quickSort(A, low, high);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
