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

ll fib(ll n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	Ragdha

	ll n;
	cin >> n;

	cout << fib(n-1);

	return 0;
}
