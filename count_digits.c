#include<stdio.h>
int main()
{
    int c=0,n,arr[100],i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==0)
        {
            c++;
        }
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        printf("%d ",c);
    }
}