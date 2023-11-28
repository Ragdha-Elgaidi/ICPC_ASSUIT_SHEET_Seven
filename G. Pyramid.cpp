#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>

#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void printSpaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        cout << ' ';
    }
}

void printAsterisks(int asterisks)
{
    for (int i = 0; i < asterisks; i++)
    {
        cout << '*';
    }
}

void Pyramid(int n, int currentRow)
{
    if (currentRow > n) 
    {
        return;
    }

    // Print spaces
    printSpaces(n - currentRow);

    // Print asterisks
    printAsterisks(2 * currentRow - 1);

    cout << endl;

    // Call the function for the next row
    Pyramid(n, currentRow + 1);
}

int main()
{
    Ragdha

    int n;
    cin >> n;

    Pyramid(n, 1);

    return 0;
}
