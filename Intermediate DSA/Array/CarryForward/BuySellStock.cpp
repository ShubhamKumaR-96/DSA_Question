//  Best Time to Buy and Sell Stocks I
// Problem Description
// Say you have an array, A, for which the ith element is the price of a given stock on day i. If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

// Return the maximum possible profit.

// Problem Constraints
// 0 <= len(A) <= 7e5

// 1 <= A[i] <= 1e7

// Input Format
// The first and the only argument is an array of integers, A.

// Output Format
// Return an integer, representing the maximum possible profit.

// Example Input
// Input 1: A = [1, 2]

// Input 2: A = [1, 4, 5, 2, 4]

// Example Output
// Output 1: 1

// Output 2: 4

// Example Explanation
// Explanation 1: Buy the stock on day 0, and sell it on day 1.

// Explanation 2: Buy the stock on day 0, and sell it on day 2.

#include <iostream>
using namespace std;

int maxiMumProfit(int a[], int n)
{
    if (n == 0 || n == 1)
        return 0;
    int minBuy = a[0], maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        int cuurentProfit = a[i] - minBuy;
        maxProfit = max(maxProfit, cuurentProfit);
        minBuy = min(minBuy, a[i]);
    }
    return maxProfit;
}

int main()
{
    int n;
    cout << "Enter the size N : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total Profit : " << maxiMumProfit(arr, n);
    return 0;
}