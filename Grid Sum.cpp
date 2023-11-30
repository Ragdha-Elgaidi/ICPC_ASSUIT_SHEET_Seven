/*
- Given a 2D array of numbers, all of them are positive distinct. Robot start from 
(0, 0). It can move to the right or bottom or diagonal. See the arrows.
- It will select one direction: the maximum. Print the total path sum of this robot
*/

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

int di[] = { 1, 0, 1 };//r,b,d  (directional array)  //row
int dj[] = { 0, 1, 1 };//column

using namespace std;

int path_sum(int grid[100][100], int ROWS, int COLS, int row = 0, int col = 0)
{
	int sum = grid[row][col];

	if (row == ROWS - 1 && col == COLS - 1)
		return sum;

	int max_idx = -1, max_value = 0;

	for (int d = 0; d < 3; ++d)
	{
		int new_row = row + di[d];
		int new_col = col + dj[d];

		if (new_row >= ROWS || new_col >= COLS)
		{
			continue;
		}

		if (max_value < grid[new_row][new_col])
		{
			max_value = grid[new_row][new_col], max_idx = d;
		}

	}

	int new_row = row + di[max_idx];
	int new_col = col + dj[max_idx];

	return sum + path_sum(grid, ROWS, COLS, new_row, new_col);
}

int main() 
{
	//freopen("c.in", "rt", stdin);

	int grid[100][100];
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> grid[i][j];
		}
	}

	cout << path_sum(grid, n, m);

	return 0;
}
