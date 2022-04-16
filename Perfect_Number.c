#include<stdio.h>
int fact(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    return c;
}
int main()
{
    int n,c;
    scanf("%d",&n);
    c=fact(n);
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}