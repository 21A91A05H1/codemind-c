#include<stdio.h>
int main()
{
    int T,t,fac=1,n;
    scanf("%d",&T);
    t=1;
    while(t<=T)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            fac=fac*n;
            n--;
        }
        printf("%d
",fac);
        fac=1;
        t++;
    }
}