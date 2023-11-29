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

bool is_prefix(string main, string prefix, int start_pos = 0)
{
	if (start_pos == prefix.size())
		return true;

	if (main[start_pos] != prefix[start_pos])
		return false;

	return is_prefix(main, prefix, start_pos + 1);
}

int main()
{
	Ragdha 

	cout << is_prefix("abcdefg", "abcd", 3) << "\n";

	cout << is_prefix("abcdefg", "abd", 3) << "\n";

	return 0;
}
