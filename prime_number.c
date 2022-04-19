#include<stdio.h>
int main()
{
    int n,i,fc=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           fc++;
       }
    }
    for(i=1;i<=n;i++)
    {
        if(fc>2)
        {
        printf("not a prime");
        break;
        }
        else
        {
        printf("prime");
        break;
        }
    }
  return 0;
}