#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i;
        for(j=i;j<=n;j++)
        {
            printf("%d ",c);
            c+=1;
        }
        printf("
");
    }
}