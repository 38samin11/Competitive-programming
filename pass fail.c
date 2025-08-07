#include<stdio.h>
int main()
{
    int n,i,j,h,arr[100000],count=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            count++;
        }
    }
    printf("%d",count);



}


