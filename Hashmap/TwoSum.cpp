// 1. Two Sum   => Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

//  Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSums(vector<int> & nums,int target){
    int n=nums.size();
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int rem=target-nums[i];
        if(m.find(rem)!=m.end()){
            ans.push_back(m[rem]);
            ans.push_back(i);
        }else m[nums[i]]=i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    vector<int> v;
    int val;
    cout<<"Enter ele : ";
    for (int i = 0; i < n; i++)
    { 
        cin>>val;
        v.push_back(val);
    }
    int target;
    cout << "Target : ";
    cin >> target;
    vector<int> result = twoSums(v, target);
    cout << "Two sums : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}