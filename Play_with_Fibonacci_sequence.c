#include<stdio.h>
int main()
{
    int n,a,b,c,i,t;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d",a,b);
    i=2;
    while(i<n)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        i++;
    }
}