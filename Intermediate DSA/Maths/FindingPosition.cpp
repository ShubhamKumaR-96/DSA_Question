// Finding Position
// Problem Description
// Given an integer A which denotes the number of people standing in the queue.
// A selection process follows a rule where people standing on even positions are selected. 
// Of the selected people a queue is formed and again out of these only people on even position 
// are selected.

// This continues until we are left with one person. Find and return the position of
// that person in the original queue.  


// Problem Constraints
// 1 <= A <= 10^9


// Input Format
// The only argument given is integer A.


// Output Format
// Return the position of the last selected person in the original queue.


// Example Input
// A = 10


// Example Output
// 8


// Example Explanation
// Initially,people at 2,4,6,8,10 position are selected.
// Then 4,8 are selected since 4 at 2nd position and 8 at 4th position in the new queue.
// Finally 8 is selected.


#include <iostream>

using namespace std;

int findPosition(int A) {
    if (A <= 2) {
        return A;
    }
    
    if (A % 2 == 0) {
        return 2 * findPosition(A / 2);
    } else {
        return A - 1;
    }
}

int main() {
    int A;
    cin >> A;
    cout << findPosition(A) << endl;
    return 0;
}
