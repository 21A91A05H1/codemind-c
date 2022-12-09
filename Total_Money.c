#include<stdio.h>
int main()
{
    long long int t,n,n1,s,d,D,p,q,i;
    scanf("%d",&t);
    while(t)
    {
        scanf("%lld%lld%lld%lld",&D,&d,&p,&q);
        n=D/d;
        n1=D%d;
        s=0;
        for(i=0;i<n;i++)
        {
            s+=(p+i*q)*d;
        }
        s+=(p+n*q)*n1;
        printf("%lld
",s);
        t-=1;
    }
}