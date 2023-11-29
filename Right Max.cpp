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

void right_max_v2(int arr[], int len) 
{
	if (len == 1)
		return;

	right_max_v2(arr + 1, len - 1);	// arr+1 is the a new array shifted. E.g. { 1, 8, 2, 10, 3 } => {8, 2, 10, 3 }
	arr[0] = max(arr[0], arr[1]);	// Then we only need to think about arr (0)
}

int main()
{
	Ragdha
	int arr[] = { 901, 18, 9, 7, 8 };

	right_max_v2(arr, 5);

	for (int i = 0; i < 5; ++i) 
	{
		cout << arr[i] << " ";
	}//901 18 9 8 8

	return 0;
}
