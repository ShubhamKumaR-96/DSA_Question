// Given an array of distinct elements of size N, find the count of noble integers
// Note =>  Note: arr[i] is noble if count of elements smaller than arr[i] is equal to arr[i] where arr[i] is element at index i.
// Arr = 1 -5 3 5 -10 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force way

int countNobleInteger(vector<int> &A, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j] < A[i])
            {
                cnt++;
            }
        }
        if (cnt == A[i])
        {
            ans++;
        }
    }
    return ans;
}

// Optimized way using sort

int totalNobleInt(vector<int>& V,int n){
    sort(V.begin(),V.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(V[i]==i){
            ans++;
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    cout << "Total Noble Integers : " << totalNobleInt(v, n);

    return 0;
}