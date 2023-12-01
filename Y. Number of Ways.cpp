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

int st, ed;
int get(int pos)
{
    if (pos > ed)
        return 0;

    if (pos == ed)
        return 1;

    return get(pos + 1) + get(pos + 2) + get(pos + 3);
}

void solve() 
{
    cin >> st >> ed;
    cout << get(st);
}

int main()
{
    Ragdha

    solve();

    return 0;
}
