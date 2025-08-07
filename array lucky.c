#include<stdio.h>
int main()
{
    int i,arr[100000],n,low,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    low=arr[0];
    for(i=1;i<n;i++)
    {
        if(low>arr[i])
        {
            low=arr[i];
        }

    }
    for(i=0;i<n;i++)
    {
        if(low==arr[i])
            count++;
    }
    if(count%2==0)
        printf("Unucky");
    else
        printf("Lucky");

}



