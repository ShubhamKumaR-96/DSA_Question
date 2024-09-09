// find out wheather a given string is plaindrome or not

#include <iostream>
using namespace std;

bool palindrome(string s, int i, int j)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
        return palindrome(s, i + 1, j - 1);
}

int main()
{
    string s = "dad";
    cout << palindrome(s, 0, s.length() - 1);
}