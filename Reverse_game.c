#include<stdio.h>
int main()
{
    int i,d,r=0,arr[100],b[100],j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   r=0;
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            r=(r*10)+d;
        }
        b[i]=r;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}