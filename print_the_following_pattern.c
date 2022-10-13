#include<stdio.h>
int main()
{
    int n,i,c,j;
    scanf("%d",&n);
    c=n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",(64+c));
        }
        c-=1;
        printf("
");
    }
}