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


ll nCr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    return (n * nCr(n - 1, r - 1)) / r;
}

int main()
{
    Ragdha

    int N, R;
    cin >> N >> R;

    cout << nCr(N, R) << endl;

    return 0;
}
