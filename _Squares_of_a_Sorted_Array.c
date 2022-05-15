#include<stdio.h>
int main()
{
    int n,arr[100],i,j,t,b[100],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i]*arr[i];
        b[i]=s;
        s=0;
        
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]<b[j])
            {
               t=b[i];
               b[i]=b[j];
               b[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}