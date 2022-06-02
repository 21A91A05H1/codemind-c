#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,rev=0,r;
    scanf("%d",&n);
    if(prime(n))
    {
        while(n)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(prime(rev))
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
}