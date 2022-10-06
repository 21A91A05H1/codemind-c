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
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            if(arr[i][j]>arr[i+1][j])
            break;
        }
        if(i==r-1)
        {
            s++;
        }
    }
    for(j=0;j<c;j++)
    {
        for(i=r-1;i>0;i--)
        {
            if(arr[i][j]>arr[i-1][j])
            break;
        }
        if(r>1 && i==0)
        {
            s++;
        }
    }
    printf("%d",s);
}