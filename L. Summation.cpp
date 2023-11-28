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


ll ArraySum(ll Array[], ll n)
{
	if (n == 1)
		return Array[0];

	ll sub_result = ArraySum(Array, n - 1);
	return sub_result + Array[n - 1];
}

int main()
{
	Ragdha

	ll n; ll Array[10000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	cout << ArraySum(Array, n);

	return 0;
}
