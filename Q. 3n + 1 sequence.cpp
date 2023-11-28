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

int counter = 0;

void Sequence(int n)
{
	counter++;
	if (n == 1)
	{
		cout << counter;
		return;
	}

	if (n % 2 == 0)
		Sequence(n / 2);
	else
		Sequence(3 * n + 1);
}

int main() 
{
    Ragdha

    int n;
    cin >> n;

	Sequence(n);

    return 0;
}
