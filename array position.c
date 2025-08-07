#include<stdio.h>
int main()
{
    int i,arr[100000],n,a,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=10)
            printf("A[%d] = %d\n",i,arr[i]);
    }

}


