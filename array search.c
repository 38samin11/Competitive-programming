#include<stdio.h>
int main()
{
    int i,arr[100000],n,a,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
            {
                count++;
                 break;
            }

    }
    if(count==1)
        printf("%d",i);
    else if(count>1)
        printf("%d",i);
    else
        printf("-1");
}
