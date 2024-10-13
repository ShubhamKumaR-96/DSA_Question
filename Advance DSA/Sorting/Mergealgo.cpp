// Given an array of integers, sort it in descending order using merge sort algorithm

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &A, vector<int> &B, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] > B[j])
        {
            res[k++] = A[i++];
        }
        else
        {
            res[k++] = B[j++];
        }
    }
    while (i < A.size())
    {
        res[k++] = A[i++];
    }
    while (j < B.size())
    {
        res[k++] = B[j++];
    }
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    if (n <= 1)
        return;
    int n1 = n / 2, n2 = n - n1;
    vector<int> A(n1), B(n2);
    for (int i = 0; i < n1; i++)
    {
        A[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        B[i] = v[i + n1];
    }
    mergeSort(A);
    mergeSort(B);
    merge(A, B, v);
    A.clear();
    B.clear();
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    mergeSort(v);
     cout << "Sorted array in descending order: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
