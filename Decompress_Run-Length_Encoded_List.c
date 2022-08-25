#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],k=0,v[100],l=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[k++]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            v[l++]=a[i];
        }
    }
    for(k=0;k<n;k++)
    {
        t=b[k];
        while(t>0)
        {
            printf("%d ",v[k]);
            t-=1;
        }
    }
}