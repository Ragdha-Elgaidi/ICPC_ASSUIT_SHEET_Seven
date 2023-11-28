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


int ArrayMax(int Array[], int n)
{
	if (n == 1)
		return Array[0];

	int sub_result = ArrayMax(Array, n - 1);

	return max(sub_result, Array[n - 1]);

}

int main()
{
	Ragdha

	int n, Array[10000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	int result = ArrayMax(Array, n);
	cout << result ;

	return 0;
}
