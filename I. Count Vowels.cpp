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

bool IsVowel(char ch)
{
    ch = tolower(ch); // Convert to lowercase to handle both upper and lower case
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int CountVowels(const string& s, int index)
{
    if (index == s.size()) 
    {
        return 0;
    }

    return IsVowel(s[index]) + CountVowels(s, index + 1);
}

int main() 
{
    Ragdha

    string S;
    getline(cin, S);

    cout<< CountVowels(S, 0);

    return 0;
}
