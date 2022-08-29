#include<stdio.h>
int main()
{
    int n,t,m,a[100],i,j,x,k;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d%d",&t,&m);
        for(j=0;j<t;j++)
        {
            scanf("%d",&a[j]);
        }
        while(m)
        {
            x=a[t-1];
            for(k=t-2;k>=0;k--) 
            {
                a[k+1]=a[k];
            }
            a[0]=x;
            m-=1;
        }
        for(i=0;i<t;i++)
        {
            if (i!=t-1)
            printf("%d ",a[i]);
            else
            printf("%d",a[i]);
            
        }
        n-=1;
        printf("
");
    }
}