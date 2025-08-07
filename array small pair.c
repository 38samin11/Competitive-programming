#include <stdio.h>
int main()
{
    int i, j, n, a, sum,T,arr[100000],min;
    scanf("%d", &T);
    for (a = 0; a < T; a++)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (sum < min)
                    min = sum;
            }
        }
       printf("%d\n", min);
    }

    return 0;
}
