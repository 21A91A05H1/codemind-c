#include<stdio.h>
int main()
{
    int m,k,a[100],i,c,s=0,j;
    scanf("%d%d",&m,&k);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        c=a[i];
        if(c==k)
        {
            s++;
        }
        else
        {
            for(j=i+1;j<m;j++)
            {
                c=c+a[j];
                if(c==k)
                {
                    s++;
                    break;
                }
            }
        }
    }
    printf("%d",s);
}