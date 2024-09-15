// Leetcode 66

#include <iostream>
#include <vector>

using namespace std;

vector<int> addOne(vector<int> &digits)
{
    int n = digits.size();

    // Traverse from the last digit
    for (int i = n - 1; i >= 0; i--)
    {
        // If the current digit is less than 9, just increment and return
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        // Set current digit to 0 if it's 9
        digits[i] = 0;
    }

    // If all digits were 9, we need to add a 1 at the front
    digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{
    vector<int> digits = {1,2,3}; // Example input

    vector<int> result = addOne(digits);

    // Print the result
    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
