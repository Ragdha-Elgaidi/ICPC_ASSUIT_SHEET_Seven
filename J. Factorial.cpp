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

ll factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int main()
{
	Ragdha

	int n;
	cin >> n;

	cout << factorial(n);
    
	return 0;
}

