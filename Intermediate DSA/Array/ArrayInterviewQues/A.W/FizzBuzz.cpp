// Given a positive integer A, return an array of strings with all the integers from 1 to N.
// But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5,
// the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both,
// the array should have "FizzBuzz" instead of the number.

// Look at the example for more details.

// Problem Constraints
//  1 <= A <= 500000

// Input Format
// The first argument has the integer A.

// Output Format
// Return an array of string.

// Example Input
// Input 1:
//  A = 5

// Example Output
// Output 1:
//  [1 2 Fizz 4 Buzz]

// Example Explanation
// Explanation 1:
//  3 is divisible by 3 so it is replaced by "Fizz".
//  Similarly, 5 is divisible by 5 so it is replaced by "Buzz".

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int A)
{
    vector<string> result;
    for (int i = 1; i <= A; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            result.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            result.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            result.push_back("Buzz");
        }
        else
        {
            result.push_back(to_string(i));
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    vector<string> ans = fizzBuzz(n);
    for (string s : ans)
    {
        cout << s << " ";
    }
    return 0;
}
