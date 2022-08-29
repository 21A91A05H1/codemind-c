#include<stdio.h>
#include<math.h>
int main()
{
    int i,min=999,k,t=0,n;
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        k=pow(2,i);
        t=abs(n-k);
        if(min>t)
        {
           min=t; 
        }
    }
    printf("%d",min);
}