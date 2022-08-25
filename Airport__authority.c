#include<stdio.h>
int main()
{
    int t,n,i=0,a[100],T,l=0,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a[l++]=n;
    }
    scanf("%d",&T);
    for(i=0;i<t;i++)
    {
        if(a[i]<=T)
        {
            c=c+1;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}