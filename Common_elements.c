#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,k=0,x,cnt=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cnt=0;
                for(x=0;x<k;x++)
                {
                    if(a[i]==c[x])
                    {
                        cnt++;
                    }
                }
                if(cnt==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}