#include <iostream>
using namespace std;

void printSubArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "{ ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "} " << ", ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printSubArr(arr, n);
    

    return 0;
}