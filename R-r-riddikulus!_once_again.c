#include<stdio.h>
int main()
{
    int n,k,i,a[100],b[100],j=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=k;i<n;i++)
    {
        b[j++]=a[i];
    }
    for(i=0;i<k;i++)
    {
        b[j++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}