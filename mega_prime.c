#include<stdio.h>
int prime(int n)
{
    int p=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    return p;
}
int main()
{
    int n,r,d=0,fc=0,dc=0,i,p;
    scanf("%d",&n);
    p=prime(n);
    if(p==2)
    {
        while(n)
        {
            dc++;
            r=n%10;
            n=n/10;
            if(r)
            {
                for(i=1;i<=r;i++)
                {
                    if(r%i==0)
                    {
                        fc++;
                    }
                }
                if(fc==2)
                {
                    d++;
                }
                fc=0;
            }
        }
        if(d==dc)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    else
    printf("Not Mega Prime");
}