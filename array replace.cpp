#include <iostream>
using namespace std;

int main()
{
    int i, arr[100000], n, a, count = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
            arr[i] = 1;
        if(arr[i] < 0)
            arr[i] = -2;
        if(arr[i] == 0)
            arr[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
