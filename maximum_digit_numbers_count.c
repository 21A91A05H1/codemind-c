#include<stdio.h>
int main()
{
    int n,c=0,t,a[100],i,dc=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=0;
        t=a[i];
        while(t)
        {
            d++;
            t/=10;
        }
        if(d>c)
        {
            c=d;
        }
    }
    for(i=0;i<n;i++)
    {
        d=0;
        t=a[i];
        while(a[i])
        {
            d++;
            a[i]/=10;
        }
        if(d==c)
        {
            printf("%d ",t);
        }
    }
}