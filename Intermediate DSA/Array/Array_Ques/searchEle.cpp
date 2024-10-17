#include <iostream>
#include <vector>

using namespace std;

bool SearchElement(vector<int>& nums, int B) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == B) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int B = 5;

    if (SearchElement(nums, B)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
