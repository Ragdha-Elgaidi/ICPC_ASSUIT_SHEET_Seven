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


double ArrayAverage(double Array[], int n)
{
	if (n == 1)
		return Array[0];

	double sub_result = ArrayAverage(Array, n - 1);
	sub_result = sub_result * (n - 1);

	return (sub_result + Array[n - 1]) / n;
}

int main()
{
	Ragdha

	int n; double Array[10000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	cout << fixed << setprecision(6) << ArrayAverage(Array, n);

	return 0;
}
