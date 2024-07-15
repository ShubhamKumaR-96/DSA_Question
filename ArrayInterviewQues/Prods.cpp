#include <iostream>
using namespace std;

void replaceWithProduct(int ar[], int n)
{
    // Create an empty array to store the product of all elements except itself
    int temp[n];

    // Initialize the first element of temp as 1
    temp[0] = 1;

    // Calculate the product of all elements to the left of each element
    for (int i = 1; i < n; i++)
    {
        temp[i] = temp[i - 1] * ar[i - 1];
    }

    // Initialize a variable to store the product of all elements to the right
    int right = 1;

    // Calculate the product of all elements to the right of each element
    // and update the temp array with the combined product
    for (int i = n - 1; i >= 0; i--)
    {
        temp[i] = temp[i] * right;
        right *= ar[i];
    }

    // Copy the modified temp array back to the original array
    for (int i = 0; i < n; i++)
    {
        ar[i] = temp[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size N: ";
    cin >> n;

    int ar[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    replaceWithProduct(ar, n);

    cout << "Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}
