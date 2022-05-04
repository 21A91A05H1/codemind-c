#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag,c;
    int l,r;
    scanf("%d",&r);
    scanf("%d",&l);
    c=0;
    for(n=r;n<=l;n++)
    {
        if(n==1)
        continue;
        
        flag=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        c++;;
        
    }
    printf("%d",c);
}