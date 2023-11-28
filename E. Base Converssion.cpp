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


void Recursion( ll n)
{
	if (n > 0)
	{
		Recursion(n / 2);

		cout << n % 2;
	}
}

int main()
{
	Ragdha

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;

		Recursion(n);
		cout << endl;

	}
	return 0;
}
