#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>
#include <cctype> // for tolower function
#include <cstring>//memset


#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int MAX_N = 20; // Maximum number of items
const int MAX_W = 100; // Maximum knapsack capacity

int N, W;
int weights[MAX_N], values[MAX_N];
int memo[MAX_N + 1][MAX_W + 1]; // Memoization array

int knapsack(int index, int remainingWeight)
{
    // Base case: check if we have considered all items or the knapsack is full
    if (index == N || remainingWeight == 0) 
    {
        return 0;
    }

    // Check if the result for this subproblem is already calculated
    if (memo[index][remainingWeight] != -1) 
    {
        return memo[index][remainingWeight];
    }

    // If the current item's weight exceeds the remaining capacity, skip it
    if (weights[index] > remainingWeight) 
    {
        return memo[index][remainingWeight] = knapsack(index + 1, remainingWeight);
    }

    // Recursive case: try both options, either include or exclude the current item
    int includeItem = values[index] + knapsack(index + 1, remainingWeight - weights[index]);
    int excludeItem = knapsack(index + 1, remainingWeight);

    // Store the result in the memoization array and return the maximum value
    return memo[index][remainingWeight] = max(includeItem, excludeItem);
}

int main()
{
    Ragdha

    cin >> N >> W;

    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }

    // Initialize the memoization array with -1
    memset(memo, -1, sizeof(memo));

    int result = knapsack(0, W);
    cout << result << endl;

    return 0;
}
