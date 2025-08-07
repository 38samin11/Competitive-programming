#include<stdio.h>
int main()
{
    int n,i,h,arr[100000],sum=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            sum=sum+2;
        }
        if(arr[i]<=h)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}
