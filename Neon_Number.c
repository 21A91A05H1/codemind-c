#include<stdio.h>
int main()
{
    int n,s,m=0,d;
    scanf("%d",&n);
    s=n*n;
    while(s)
    {
        d=s%10;
        s=s/10;
        m=m+d;
    }
    if(m==n)
    {
        printf("Neon Number");
    }
    else
    printf("Not Neon Number");
}