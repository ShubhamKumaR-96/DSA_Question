#include <iostream>
#include <climits>
using namespace std;

int findMaxMod(int arr[], int n)
{
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
    }
    int secMaxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secMaxNo & arr[i] < maxNo)
        {
            secMaxNo = arr[i];
        }
    }
    int ans = (secMaxNo % maxNo);
    return ans;
}

// optimisez code

int findMaxMod2(int arr[], int n)
{
    int firstMax = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < firstMax)
        {
            secondMax = arr[i];
        }
    }
    return (secondMax == INT_MIN) ? 0 : (secondMax % firstMax);
}

int main()
{
    int n;
    cout << "Enter size N : ";
    cin >> n;
    int ar[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int result = findMaxMod2(ar, n);
    cout << "Max Mod : " << result << endl;
    return 0;
}