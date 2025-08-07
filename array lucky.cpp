#include <iostream>
using namespace std;

int main()
{
    int i, arr[100000], n, low, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    low = arr[0];
    for (i = 1; i < n; i++)
    {
        if (low > arr[i])
        {
            low = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (low == arr[i])
            count++;
    }
    if (count % 2 == 0)
        cout << "Unucky";
    else
        cout << "Lucky";
}
