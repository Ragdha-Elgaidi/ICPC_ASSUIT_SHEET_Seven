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


void Recursion(int n,int counter)
{
	if (counter > n)
	{
		return ;
	}
	
	cout << counter;

	if (counter !=n )
	{
		cout << endl;
	}

	Recursion(n ,counter + 1);
}

int main()
{
	Ragdha

	int n;
	cin >> n;

	Recursion(n,1);
    
	return 0;
}
