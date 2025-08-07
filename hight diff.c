#include<stdio.h>
int main()
{
    int n,i,j,h,arr[100000],count=0,dif[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {

        dif[i]=arr[i]+arr[i+1];
        dif[n-1]=arr[n-1]-arr[0];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",dif[i]);
    }





}


