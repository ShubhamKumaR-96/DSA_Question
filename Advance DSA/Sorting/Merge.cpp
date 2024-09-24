
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res[k++] = a[i++];
        }
        else
        {
            res[k++] = b[j++];
        }
    }
    if (i == a.size()) // when a is ended
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (j == b.size()) // when b is ended
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    // divide nd conquor
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    // copy paste
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }
    // recursive way
    mergeSort(a);
    mergeSort(b);

    merge(a, b, v);
}

int main()
{
    int a[] = {4, 1, 5, 2, 80};
    int n1 = sizeof(a) / sizeof(a[0]);
    vector<int> arr(a, a + n1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Merge array" << endl;
    mergeSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
