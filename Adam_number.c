#include<stdio.h>
int main()
{
    int n,s,d,k=0,m,l=0,x;
    scanf("%d",&n);
    s=n*n;
    while(n)
    {
        d=n%10;
        n=n/10;
        k=(k*10)+d;
        
    }
   m=k*k;
   while(m)
   {
       x=m%10;
       m=m/10;
       l=(l*10)+x;
   }
   if(l==s)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
   return 0;
}