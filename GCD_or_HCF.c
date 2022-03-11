#include<stdio.h>
int main()
{
    int n,m,max=0,i,temp;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    for(i=1;i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            if(max<i)
            {
                max=i;
            }
        }
    }
    printf("%d",max);
}