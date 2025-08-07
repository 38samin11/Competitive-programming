#include<stdio.h>
int main()
{
    int arr[10000010],n,i;
    long long sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if(sum<0)
    {
        sum=sum*(-1);

    }
    printf("%lld\n",sum);

}
