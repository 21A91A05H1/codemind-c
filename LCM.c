#include<stdio.h>
int main()
{
    int n,m,temp,min=0,i,hcf,lcm;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    for(i=1;i<=m;i++)
     {
         if(n%i==0 && m%i==0)
         {
             if(i>min)
             {
             min=i;
             }
         }
    
     }
     hcf=min;
     lcm=(n*m)/hcf;
     printf("%d",lcm);
}