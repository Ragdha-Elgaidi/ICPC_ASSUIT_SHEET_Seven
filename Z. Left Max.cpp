#include <iostream>

#define ll long long
#define Ragdha ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

void left_max(int arr[], int len)
{
    if (len == 1)
        return;

    left_max(arr, len - 1);
    arr[len - 1] = max(arr[len - 1], arr[len - 2]);
}

int main()
{
  Ragdha
    int len, arr[100000]; 
    cin >> len;

    for (int i = 0; i < len; i++)
      {
        cin >> arr[i];
    }

    left_max(arr, len);

    for (int i = 0; i < len; ++i)
      {
        cout << arr[i] << " ";
    }

    return 0;
}
