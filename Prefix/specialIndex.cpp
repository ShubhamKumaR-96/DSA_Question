// Given an array of size N, task is to find the count of array indices such that removing an element from
// an element from these indices makes the sum of even indexed and odd indexed array elemnts equal.
//  arr = 4 3 2 7 6 -2

#include <iostream>
using namespace std;

int findSpecialIndex(int arr[], int n)
{
    int ps_even_No[n] = {arr[0]};
    int ps_odd_No[n] = {0};

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ps_even_No[i] = ps_even_No[i - 1] + arr[i];
        }
        else
        {
            ps_odd_No[i] = ps_odd_No[i - 1] + arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int even_sum = ps_even_No[n - 1] - (i % 2 == 0 ? ps_even_No[i] : 0);
        int odd_sum = ps_odd_No[n - 1] - (i % 2 != 0 ? ps_odd_No[i] : 0);

        if (even_sum == odd_sum)
        {
            count++;
        }
    }
    return count;
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
    cout << "Special Index : " << findSpecialIndex(arr, n) << endl;

    return 0;
}