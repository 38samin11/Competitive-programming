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
    cin >> a;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            count++;
            break;
        }
    }
    if(count == 1)
        cout << i;
    else if(count > 1)
        cout << i;
    else
        cout << "-1";
}
