// find out all subarray of an array

#include <iostream>
#include <vector>
using namespace std;


// will work on only unique elements

void printSubArr(vector<int> v, int arr[], int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
        printSubArr(v, arr, n, idx + 1);
        if (v.size() == 0 || arr[idx - 1] == v[v.size() - 1])
        {
            v.push_back(arr[idx]);
            printSubArr(v, arr, n, idx + 1);
        }
    
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
    vector<int> v;
    printSubArr(v, arr, n, 0);

    return 0;
}