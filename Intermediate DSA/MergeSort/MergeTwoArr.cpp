#include <iostream>
#include <vector>

using namespace std;

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

void mergeSort(vector<int> &res)
{
    int n = res.size();
    if (n == 1)
        return;
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
    mergeSort(A);
    mergeSort(B);

    mergeTwoArr(A, B, res);
}

int main()
{
    int n, m;

    // Taking the size of vectors as input
    cout << "Enter Size A: ";
    cin >> n;
    cout << "Enter Size  B: ";
    cin >> m;

    // Declaring vectors A and B
    vector<int> A(n);
    vector<int> B(m);

    // Taking input for vector A
    cout << "Enter elements for vector A: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Taking input for vector B
    cout << "Enter elements for vector B: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    vector<int> res(n + m);

    mergeTwoArr(A, B, res);

    cout << "After Merge : ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
