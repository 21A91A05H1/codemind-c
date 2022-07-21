#include<stdio.h>
int main()
{
    int n,a[100],m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=n/2;
    for(i=n-1;i>m-1;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}