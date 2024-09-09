// Print the subArr sum with multiple quries q;
// arr : 3 6 12 1 2 5 7 8 9

#include <iostream>
using namespace std;

void quriesSums(int arr[], int n, int q, int ps[])
{
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    int start, end;
    while (q > 0)
    {
        cout << "Enter the starting & Ending index : ";
        cin >> start >> end;
        if (start != 0)
        {
            cout << ps[end] - ps[start - 1] << endl;
        }
        else
        {
            cout << ps[end] << endl;
        }
        q--;
    }
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
    int ps[n];
    int q;
    cout << "Enter the quries : ";
    cin >> q;
    quriesSums(arr, n, q, ps);

    return 0;
}