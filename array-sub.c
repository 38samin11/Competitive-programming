#include<stdio.h>
int main()
{
    int i,j,k,a,arr[100000],max,n,t;
    scanf("%d",&t);
    for(a=0; a<t; a++)
    {
        scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            max=arr[i];
            for(k=i; k<=j; k++)
            {
                if(max<arr[k])
                {
                    max=arr[k];
                }
            }
            printf("%d ",max);
        }
    }
    printf("\n");

    }

}




