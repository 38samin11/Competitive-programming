#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a, sum, T, arr[100000], min;

    cin >> T;
    for (a = 0; a < T; a++)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        min = INT32_MAX; 

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (sum < min)
                    min = sum;
            }
        }

        cout << min << endl;
    }

    return 0;
}
