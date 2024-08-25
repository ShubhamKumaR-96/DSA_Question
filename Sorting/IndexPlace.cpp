
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the ele: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v(n, 0); // 0 => not visited
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int minNo = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (minNo > arr[j])
                {
                    minNo = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; // visited
        x++;
    }
    printArr(arr, n);
}