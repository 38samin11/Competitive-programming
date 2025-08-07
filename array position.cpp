#include <iostream>
using namespace std;

int main()
{
    int i, arr[100000], n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << endl;
    }
}
