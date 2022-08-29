#include<stdio.h>
int main()
{
    int n,a[100],i,m=0,k,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
   for(i=0;i<n;i++)
   {
       a[i]=a[i]+k;
   }
   for(i=0;i<n;i++)
   {
       if(a[i]>=m)
       {
           printf("True ");
       }
       else
       {
           printf("False ");
       }
   }
}