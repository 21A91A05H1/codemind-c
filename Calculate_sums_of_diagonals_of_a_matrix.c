#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,sum=0,s=0;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s+=arr[i][i];
    }
    for(i=0;i<r;i++)
    {
        sum+=arr[i][r-i-1];
    }
    printf("Principal Diagonal:%d
",s);
    printf("Secondary Diagonal:%d
",sum);
    return 0;
}