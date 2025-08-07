#include <iostream>
using namespace std;

int main()
{
    int i, arr[100000], n, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            count = 1;
        }
        break;
    }
    if (count == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
