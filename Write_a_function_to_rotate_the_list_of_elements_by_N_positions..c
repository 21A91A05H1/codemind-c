#include<stdio.h>
int main()
{
    int n,a[100],k,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    while(k)
    {
        j=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=j;
        k-=1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}