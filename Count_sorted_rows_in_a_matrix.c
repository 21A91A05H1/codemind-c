#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,arr[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>arr[i][j+1])
            break;
        }
        if(j==c-1)
        {
            s++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=c;j>0;j--)
        {
            if(arr[i][j]>arr[i][j-1])
            break;
        }
        if(c>1 && j==0)
        {
            s++;
        }
    }
    printf("%d",s);
}