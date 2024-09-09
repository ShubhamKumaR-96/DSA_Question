// write a starting and ending index of arr whose length is K
// arr = 3 4 2 -1 6 7 8 9 3 2 -1 4    K =6

#include <iostream>
using namespace std;

void printKlengthArr(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int start = i;
        int end = i + k - 1;
        cout << " ( " << start << " ," << end << " ) ";
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
    int k;
    cout << "Enter the value of K : ";
    cin >> k;
    printKlengthArr(arr, n, k);
    return 0;
}