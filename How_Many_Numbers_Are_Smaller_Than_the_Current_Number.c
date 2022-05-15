#include<stdio.h>
int main()
{
    int n,arr[100],i,temp,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        for(j=0;j<n;j++)
        {
            if(temp>arr[j])
            c++;
        }
        printf("%d ",c);
        c=0;
    }
}