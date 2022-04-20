#include<stdio.h>
int main()
{
    int x,y,i,s=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            s=s+i;
        }
    }
    if(s==y)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}