// Lucky Numbers

// A lucky number is a number which has exactly 2 distinct prime divisors. 
// You are given a number N and you need to determine the count of lucky numbers
// between the range 1 to N (both inclusive). Input

// The first argument contains one integer number N (1 ≤  N  ≤ 5000)

// Output
// Return an integer i.e the count of lucky numbers between 1 and N, both inclusive.
// Examples Input
// 8
// Output
// 1 
// Explanation Testcase 1-
// Between [1,8] there is only 1 lucky number i.e 6


#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int lucky_numbers(int N) {
    int count = 0;
    
    for (int num = 2; num <= N; ++num) {
        vector<int> divisors;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                divisors.push_back(i);
                if (i != num / i) {
                    divisors.push_back(num / i);
                }
            }
        }
        
        if (divisors.size() == 2 && is_prime(divisors[0]) && is_prime(divisors[1])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    cout << lucky_numbers(N) << endl;
    return 0;
}
