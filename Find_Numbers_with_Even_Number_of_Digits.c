#include<stdio.h>
int main()
{
    int n,arr[100],i,d,c=0,pc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   c=0;
        while(arr[i])
        {
          d=arr[i]%10;
          arr[i]=arr[i]/10;
          c++;
        }
       if(c%2==0)
       {
           pc++;
       }
        
    }
    printf("%d",pc);
}