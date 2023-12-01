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

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int row, col;
int arr1[MAX_ROWS][MAX_COLS], arr2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

void matrixSum(int currentRow, int currentCol)
{
    // Base case: reached the end of rows
    if (currentRow == row)
    {
        return;
    }

    // Calculate the sum for the current element
    result[currentRow][currentCol] = arr1[currentRow][currentCol] + arr2[currentRow][currentCol];

    // Move to the next column or the next row if at the last column
    if (currentCol < col - 1)
    {
        matrixSum(currentRow, currentCol + 1);
    }
    else
    {
        matrixSum(currentRow + 1, 0);
    }
}

int main() 
{
    Ragdha

    // Input matrix dimensions
    cin >> row >> col;

    // Input elements of the first matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> arr1[i][j];
        }
    }

    // Input elements of the second matrix
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Calculate the sum of matrices
    matrixSum(0, 0);

    // Output the result matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
