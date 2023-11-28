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

void Recursion(int n)
{
	if (n == 0)
	{
		return ;
	}

	cout << "I love Recursion\n";

	Recursion(n - 1);
}

int main()
{
	Ragdha

	int n;
	cin >> n;

	Recursion(n); 

	return 0;
}
