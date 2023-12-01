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

int log2(ll N, int result = 0) 
{
    if (N <= 1)
    {
        return result;
    }

    return log2(N / 2, result + 1);
}

int main()
{
    Ragdha

    ll N;
    cin >> N;

    cout << log2(N) << endl;

    return 0;
}
