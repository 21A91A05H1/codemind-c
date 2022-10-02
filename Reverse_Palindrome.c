int ispalin(int n)
{
    int r=0,t=n,d;
    while(t)
    {
        d=t%10;
        t=t/10;
        r=r*10+d;
    }
    if(n==r)
    {
        return 1;
    }
    return 0;
}
int reverse(int n)
{
    int s=0,m;
    while(n)
    {
        m=n%10;
        n=n/10;
        s=s*10+m;
    }
    return s;
    
}
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    x=x+reverse(x);
    while(1)
    {
        if(ispalin(x))
        {
            printf("%d",x);
            break;
        }
        else
        {
            x=reverse(x)+x;
        }
    }
}