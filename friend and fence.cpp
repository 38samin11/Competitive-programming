#include <iostream>
using namespace std;

int main()
{
    int n, i, h, arr[100000], sum = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            sum = sum + 2;
        }
        if (arr[i] <= h)
        {
            sum = sum + 1;
        }
    }
    cout << sum;
}
