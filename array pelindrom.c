#include<stdio.h>
int main()
{
    int i,arr[100000],n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
    if(arr[i]==arr[n-i-1])
    {
       count=1;
    }
    break;
    }
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}








