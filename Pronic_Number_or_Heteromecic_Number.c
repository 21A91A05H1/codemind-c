#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n==(i*(i+1)))
        {
            
            c++;
        }
    }
    if(c>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}