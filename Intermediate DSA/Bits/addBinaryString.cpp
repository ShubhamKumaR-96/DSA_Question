// Given two binary strings a and b, return their sum as a binary string.
// Example 1:
// Input: a = "11", b = "1"Output: "100"
// Example 2:
// Input: a = "1010", b = "1011"Output: "10101"  do in c++ and explain step by step for every itertion

#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string ans = "";

    // Process digits from the end of both strings
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i] - '0'; // Convert char to int
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        ans = to_string(sum % 2) + ans;
    }
    return ans;
}

int main()
{
    string a, b;
    cout << "Enter value of A : ";
    cin >> a;
    cout << "Enter value of B : ";
    cin >> b;
    cout << "Binary sum :  " << addBinary(a, b) << endl;
    return 0;
}
