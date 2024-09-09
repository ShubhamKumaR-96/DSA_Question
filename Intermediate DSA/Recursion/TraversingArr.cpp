// Traversing Array using recursion

#include <iostream>
using namespace std;

void displayRec(int arr[], int n, int idx)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    displayRec(arr, n, idx + 1);
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter arr elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Traversing Array using recursion" << endl;
    displayRec(arr, n, 0);
}