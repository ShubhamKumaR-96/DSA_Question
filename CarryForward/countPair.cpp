// count pairs "ag"
// given a char[], calculate no of pairs i,j such that i<j, s[i]=='a' && s[j]='g'
// Note => All charaterrs are lower case  arr= b a a g d c a g  arr= a c g d g a g

#include <iostream>
using namespace std;

int countPairs(char arr[], int n)
{
    int count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a')
        {
            count++;
        }
        if (arr[i] == 'g')
        {
            ans += count;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    char arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total pairs : " << countPairs(arr, n) << endl;

    return 0;
}