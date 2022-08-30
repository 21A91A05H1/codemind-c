#include<stdio.h>
int main()
{
    long long int x,n,m,t,f=-1;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld%lld",&m,&n);
        f=-1;
        for(x=0;x<=n;x++)
        {
            if((x*x)%n==m)
            {
                f=x;
                break;
            }
        }
         printf("%lld
",f);
         t--;
    }
}