#include<stdio.h>
int main()
{
    int i,j,n,r=0,t,d,c;
    scanf("%d",&n);
    n=n+1;
    while(n)
    {
        r=0;
        t=n;
        while(t)
        {
            d=t%10;
            r=(r*10)+d;
            t=t/10;
        }
        if(r==n)
        {
            c=0;
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    c+=1;
                }
            }
            if(c==2)
            {
                printf("%d",n);
                break;
            }
        }
        n+=1;
    }
}