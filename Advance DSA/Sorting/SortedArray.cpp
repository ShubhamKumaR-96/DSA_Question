// Given an array A[N]
// Array A is sorted from x => x-y-1
// sorted from y => y - z we need to find x - z sorted array
// Arr = 8 1 3 6 11 2 4 9 7 6

#include <iostream>
#include <vector>
using namespace std;

void mergebwArr(vector<int> &v, int x, int y, int z)
{
    int p1 = x, p2 = y;
    int temp[z - x + 1], p3 = 0;
    while (p1 < y && p2 <= z)
    {
        if (v[p1] < v[p2])
        {
            temp[p3++] = v[p1++];
        }
        else
        {
            temp[p3++] = v[p2++];
        }
    }
    while (p1 < y)
    {
        temp[p3++] = v[p1++];
    }
    while (p2 <= z)
    {
        temp[p3++] = v[p2++];
    }
}

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> v;
    cout << "Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    int x, y, z;
    cout << "Enter val x: ";
    cin >> x;
    cout << "Enter val y: ";
    cin >> y;
    cout << "Enter val z: ";
    cin >> z;
    mergebwArr(v, x, y, z);
    cout << endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}