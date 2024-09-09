// Prime Factors

// Problem Description
// You are given a Task as described below :
// You are given A queries. For each query(1<=i<=A) you are given a prime number B[i], 
// you need to give the count of all numbers in range 1 to 10^6 inclusive which have minimum 
// prime factor B[i] for each query.


// Problem Constraints
// 1<= A <=10^5
// 1<= B[i] <=10^6


// Input Format
// The first argument consists of an integer A, the number of queries.
// The second argument consists of an array B of size A.


// Output Format
// Return an array which contains the count of all numbers in range 1 to 10^6 (inclusive), 
// which have minimum prime factor B[i] for each query.


// Example Input
// A=1
// B=[11]


// Example Output
// 20779


// Example Explanation
// The numbers with minimum prime factor as 11 are: 11, 121, 143, ...

#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1e6 + 1;
vector<int> lp(MAX_N, 0); // least prime factor
vector<int> cnt(MAX_N, 0); // count of numbers with minimum prime factor

void precompute() {
    for (int i = 2; i < MAX_N; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            cnt[i] = MAX_N / i - 1; // numbers divisible by i, excluding i itself
            for (int j = i * i; j < MAX_N; j += i) {
                if (lp[j] == 0) {
                    lp[j] = i;
                }
                cnt[i] += cnt[j];
            }
        }
    }
}

vector<int> solve(vector<int> &B) {
    int n = B.size();
    vector<int> res(n);
    precompute();
    for (int i = 0; i < n; i++) {
        res[i] = cnt[B[i]];
    }
    return res;
}

int main() {
    int A;
    cin >> A;
    vector<int> B(A);
    for (int i = 0; i < A; i++) {
        cin >> B[i];
    }
    vector<int> result = solve(B);
    for (int i = 0; i < A; i++) {
        cout << result[i] << endl;
    }
    return 0;
}
