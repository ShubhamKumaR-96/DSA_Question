#include <iostream>
#include <vector>

using namespace std;

int inversionCount(vector<int> &a, vector<int> &b)
{
    int cnt = 0;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            cnt += (a.size() - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return cnt;
}

void mergeTwoArr(vector<int> &A, vector<int> &B, vector<int> &res)
{

    int i = 0, j = 0, k = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            res[k++] = A[i++];
        }
        else
        {
            res[k++] = B[j++];
        }
    }
    if (i == A.size())
    {
        while (j < B.size())
        {
            res[k++] = B[j++];
        }
    }
    if (j == B.size())
    {
        while (i < A.size())
        {
            res[k++] = A[i++];
        }
    }
}

int mergeSort(vector<int> &res)
{
    int count = 0;
    int n = res.size();
    if (n == 1)
        return 0;
    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> A(n1), B(n2);
    for (int i = 0; i < A.size(); i++)
    {
        A[i] = res[i];
    }
    for (int i = 0; i < n2; i++)
    {
        B[i] = res[i + n1];
    }
    count += mergeSort(A);
    count += mergeSort(B);
    count += inversionCount(A, B);

    mergeTwoArr(A, B, res);
    // to reduce space
    A.clear();
    B.clear();
    return count;
}

int main()
{
    int n, m;

    // Taking the size of vectors as input
    cout << "Enter Size A: ";
    cin >> n;

    vector<int> A(n);

    // Taking input for vector A
    cout << "Enter elements for vector A: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Total Inversion Count : " << mergeSort(A) << endl;
    return 0;
}
