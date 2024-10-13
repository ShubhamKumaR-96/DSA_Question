//  Asked in Google,Amazon,netflix,facebook
// # => Inversion count   arr= 10 3 8 15 6 12 2 18 7 1
// Given an array of size N. count the no of i,j pairs such that i<j & A[i]>A[j];

#include <iostream>
#include <vector>
using namespace std;

int inversionsCount(vector<int> &A, vector<int> &B)
{
    int i = 0, j = 0, count = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] > B[j])
        {
            count += (A.size() - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

void merge(vector<int> &A, vector<int> &B, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] <= B[j])
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

int mergeSort(vector<int> &V)
{
    int n = V.size();
    if (n == 1)
        return 0;
    int cnt = 0;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> A(n1), B(n2);
    for (int i = 0; i < n1; i++)
    {
        A[i] = V[i];
    }
    for (int i = 0; i < n2; i++)
    {
        B[i] = V[i + n1];
    }
    cnt += mergeSort(A);
    cnt += mergeSort(B);
    cnt+=inversionsCount(A,B);
    merge(A, B, V);
    return cnt;
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
    int ans = mergeSort(v);
    cout << "Total Inversion : " << ans;
}