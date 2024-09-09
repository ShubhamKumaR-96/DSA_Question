// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

// Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j
// has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize 
// the number of your content children and output the maximum number.
// Example 1:
// Input: g = [1,2,3], s = [1,1]
// Output: 1
// Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
// And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
// You need to output 1.

#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    // Sort both arrays in ascending order
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int childIndex = 0;
    int cookieIndex = 0;
    int contentChildren = 0;

    // Iterate through both arrays
    while (childIndex < g.size() && cookieIndex < s.size()) {
        // If the cookie size is greater than or equal to the child's greed factor,
        // assign the cookie to the child and increment both indices
        if (s[cookieIndex] >= g[childIndex]) {
            contentChildren++;
            childIndex++;
            cookieIndex++;
        } else {
            // If the cookie is too small, move to the next cookie
            cookieIndex++;
        }
    }

    return contentChildren;
}

int main() {
    int n;
    cout << "Enter the number of children: ";
    cin >> n;

    vector<int> g(n);
    cout << "Enter the greed factors: ";
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    int m;
    cout << "Enter the number of cookies: ";
    cin >> m;

    vector<int> s(m);
    cout << "Enter the cookie sizes: ";
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    int result = findContentChildren(g, s);
    cout << "Maximum number of content children: " << result << endl;

    return 0;
}