#include <iostream>
using namespace std;

int main()
{
    int i, j, k, a, arr[100000], max, n, t;
    cin >> t;
    for (a = 0; a < t; a++)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                max = arr[i];
                for (k = i; k <= j; k++)
                {
                    if (max < arr[k])
                    {
                        max = arr[k];
                    }
                }
                cout << max << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
