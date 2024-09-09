// Reverse the subarray
// arr: 3 2 7 9 12 6 8 4 1

#include <iostream>
using namespace std;

void revSubArr(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printSubArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Swapping functionality
// void Swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

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
    int start;
    cout << "Enter the Starting element : ";
    cin >> start;
    int end;
    cout << "Enter the Ending element : ";
    cin >> end;
    revSubArr(arr, start, end);
    cout << "Rerverse Subarray " << endl;
    printSubArr(arr, n);

    return 0;
}