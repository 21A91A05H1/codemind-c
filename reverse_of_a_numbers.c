#include<stdio.h>
int main()
{
    int n,d,rn=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        n=n/10;
        rn=(rn*10)+d;
    }
    printf("%d",rn);
    return 0;
}