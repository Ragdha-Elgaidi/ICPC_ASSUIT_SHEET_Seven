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
#include <iostream>
#include <cstring>

#define ll long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

// Maximum value for the end point
const int MAX = 15;

// Memoization array to store previously calculated results
int memo[MAX + 1];

int countWays(int current, int end)
{
    // Base case: if the current point is equal to or greater than the end point
    if (current >= end)
    {
        // If the current point is equal to the end point, there is one way to reach it
        return (current == end) ? 1 : 0;
    }

    // Check if the result for the current point is already calculated
    if (memo[current] != -1)
    {
        return memo[current];
    }

    // Recursive case: calculate the number of ways by considering 1, 2, and 3 steps
    int ways = 0;
    for (int steps = 1; steps <= 3; ++steps)
    {
        ways += countWays(current + steps, end);
    }

    // Memoize the result for the current point
    memo[current] = ways;

    return ways;
}

int main()
{
    Ragdha

    int start, end;
    cin >> start >> end;

    // Initialize the memoization array with -1 (indicating not calculated)
    memset(memo, -1, sizeof(memo));

    // Calculate and print the number of ways
    cout << countWays(start, end) << endl;

    return 0;
}
