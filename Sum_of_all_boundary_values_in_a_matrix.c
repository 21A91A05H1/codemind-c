#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,k,s=0;
    scanf("%d%d",&r,&k);
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==k-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}