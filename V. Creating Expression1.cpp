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

int N, X;
int numbers[20];

bool canReachTarget(int index, int currentSum)
{
    // Base case: check if we have considered all numbers
    if (index == N)
    {
        return currentSum == X;
    }

    // Try '+' sign
    if (canReachTarget(index + 1, currentSum + numbers[index]))
    {
        return true;
    }

    // Try '-' sign
    if (canReachTarget(index + 1, currentSum - numbers[index]))
    {
        return true;
    }

    // If neither '+' nor '-' leads to the target, return false
    return false;
}

int main() 
{
    cin >> N >> X;

    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    if (canReachTarget(1, numbers[0]))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
