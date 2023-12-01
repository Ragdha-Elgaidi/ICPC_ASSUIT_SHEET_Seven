#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>
#include <cctype> // for tolower function

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

#include <iostream>
#include <algorithm>

#define ll long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
#include <iostream>
#include <climits>
#include <algorithm>

#define ll long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int MAX_SIZE = 100;
ll arr[MAX_SIZE][MAX_SIZE];

ll max_path_sum_recursive(ll row, ll col, ll ROWS, ll COLS)
{
    // Base case: if we are at the bottom-right cell
    if (row == ROWS - 1 && col == COLS - 1)
        return arr[row][col];

    // If we are out of bounds, return INT_MIN
    if (row >= ROWS || col >= COLS)
        return INT_MIN;

    // Recursive cases: move down or move right
    ll move_down = max_path_sum_recursive(row + 1, col, ROWS, COLS);
    ll move_right = max_path_sum_recursive(row, col + 1, ROWS, COLS);

    // Return the current cell value plus the maximum of the two recursive moves
    return arr[row][col] + max(move_down, move_right);
}

int main()
{
    Ragdha

        ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cout << max_path_sum_recursive(0, 0, n, m);

    return 0;
}
