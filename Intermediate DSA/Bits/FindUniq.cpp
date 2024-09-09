// Given N elemnts every elements repeats twice execept 1. find  unique elements a
// arr = 6 9 6 10 9

#include <iostream>
using namespace std;

int unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the arr element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unique No : " <<unique(arr,n);

    return 0;
}