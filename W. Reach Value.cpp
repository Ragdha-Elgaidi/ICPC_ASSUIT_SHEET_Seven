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

bool canReach(ll current, ll target) 
{
    // Base case: if the current value is equal to the target
    if (current == target) 
    {
        return true;
    }

    // Base case: if the current value exceeds the target, return false
    if (current > target) 
    {
        return false;
    }
    // Check if multiplying by 10 reaches the target
    bool multiplyBy10 = canReach(current * 10, target);

    // Check if multiplying by 20 reaches the target
    bool multiplyBy20 = canReach(current * 20, target);

    // Return true if either operation reaches the target
    return multiplyBy10 || multiplyBy20;
}

int main() 
{
    Ragdha

    int T;
    cin >> T;

    while(T--)
    {
        ll N;
        cin >> N;

        // Check if you can reach N starting from 1
        if (canReach(1, N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
