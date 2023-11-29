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

ll suffix(ll arr[], int len, int cnt)
{
	if (cnt == 0)
	{
		return 0;
	}

	return arr[len - 1] + suffix(arr, len - 1, cnt-1);
}

int main()
{
	Ragdha

	ll arr[100000]; int cnt, len;
	cin >> len >> cnt;

	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
    
	cout << suffix(arr, len, cnt);

	return 0;
}
