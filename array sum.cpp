#include <iostream>
using namespace std;

int main()
{
    int arr[10000010], n, i;
    long long sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        sum = sum * (-1);
    }
    cout << sum << endl;

    return 0;
}
