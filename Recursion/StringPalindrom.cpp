// Write a recursive code to check if it is palindrome
// eg => RADAR, MADAM

#include <iostream>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
    // Base cases
    if (s >= e)
    {
        return true;
    }
     // Compare characters at both ends
    if (str[s] != str[e])
    {
        return false;
    }
    // Recursively check the inner substring
    return isPalindrome(str, s + 1, e - 1);
}

int main()
{
    string str;
    cout << "Enter String Value : ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
    {
        cout << str << " is palindrome" << endl;
    }
    else
    {
        cout << str << " is not palindrome" << endl;
    }

    return 0;
}