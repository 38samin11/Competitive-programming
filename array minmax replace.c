#include<stdio.h>
int main()
{
    int i,arr[100000],n,low,max,pos1,pos2;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    low=arr[0];
    max=arr[0];
    for(i=1; i<n; i++)
    {
        if(low>arr[i])
        {
            low=arr[i];
            pos1=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            pos2=i;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==pos1)
            arr[i]=max;
        if(i==pos2)
            arr[i]=low;
            printf("%d ",arr[i]);
    }

}



