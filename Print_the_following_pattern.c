#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d",&n);
    t=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==(n-i-1))
            {
            printf("%d ",t);
            }
            else
            {
                printf(" ");
            }
        }
        t-=1;
        printf("
");
    }
}