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
        if(arr[i]>0)
        arr[i]=1;
        if(arr[i]<0)
            arr[i]=-2;
        if(arr[i]==0)
            arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}

