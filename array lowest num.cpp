

#include <iostream>
using namespace std;

int main()
{
    int i, arr[100000], n, low, pos;
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
            pos = i + 1;
        }
        if (low == arr[0])
        {
            pos = 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        low = arr[i];
        cout << arr[i];
    }
}





