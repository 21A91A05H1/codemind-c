#include<stdio.h>
int main()
{
    int n,i,arr[100],j,k,a,b,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c++;
            a=i;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]==k)
        {
            m++;
            b=j;
            break;
        }
    }
    if(c==0 && m==0)
    {
        a=-1;
        b=-1;
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d %d",a,b);
    }
}