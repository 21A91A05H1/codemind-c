#include<stdio.h>
int main()
{
    long long int n,d,i;
    scanf("%lld",&n);
    d=n%10;
    if(d==0)
    {
        printf("%lld",n/10);
        return 0;
    }
    else if(n<0)
    {
        d=n/10;
        printf("%lld",d-1);
    }
    else
    {
        d=n/10;
        printf("%lld",d);
    }
}