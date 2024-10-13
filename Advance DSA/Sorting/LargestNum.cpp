#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Custom comparator function to sort numbers for largest concatenation
bool customCompare(string a, string b) {
    return a + b > b + a; // Concatenate both ways and see which is larger
}

string largestNumber(vector<int> &nums) {
    vector<string> strNums;
    for (int num : nums) {
        strNums.push_back(to_string(num)); // Convert each number to a string
    }

    // Sort using the custom comparator
    sort(strNums.begin(), strNums.end(), customCompare);

    // Edge case for arrays with leading zeros
    if (strNums[0] == "0") return "0";

    // Build the result string
    string result;
    for (string s : strNums) {
        result += s;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    string result = largestNumber(nums);
    cout << "Largest Number: " << result << endl;
    return 0;
}
