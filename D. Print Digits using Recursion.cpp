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


void Recursion(string n, ll index)
{
	if (index == n.size())
	{
		return;
	}

	cout << n[index] << " ";
	Recursion(n, index + 1);
}

int main()
{
	Ragdha

	int t;
	cin >> t;
	while (t--)
	{
		string n;
		cin >> n;

		Recursion(n,0);

		cout << endl;
	}
	return 0;
}
