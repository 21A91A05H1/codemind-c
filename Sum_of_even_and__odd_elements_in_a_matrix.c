#include<stdio.h>
int main()
{
    int c,r,i,j,a[100][100],os=0,es=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                es=es+a[i][j];
            }
            else
            {
                os=os+a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}