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


void printReversedEvenIndices(ll arr[10000], int n,int index) 
{
	if (index >= 0 && index < n) 
	{
		if (index % 2 == 0) 
		{
			printReversedEvenIndices(arr, n, index + 2);
			cout << arr[index] << " ";
		}
		else
		{
			printReversedEvenIndices(arr, n, index + 1);
		}
	}
}


int main()
{
	Ragdha

	int n;
	ll arr[10000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	printReversedEvenIndices(arr, n, 0);

	return 0;
}
