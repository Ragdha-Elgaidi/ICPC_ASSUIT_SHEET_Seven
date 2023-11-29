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

string Palindrome(ll arr[], int len)
{
	if (len <= 0)
	{
		return "YES";
	}

	if (arr[0] != arr[len - 1])
	{
		return "NO";
	}

	return Palindrome(arr + 1, len - 2);
}

int main()
{
	Ragdha

		ll arr[100000]; int len;
	cin >> len;

	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}

	cout << Palindrome(arr, len);

	return 0;
}
