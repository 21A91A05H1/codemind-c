#include<stdio.h>
int main()
{
    int n,a[100],i,j,s=0,m=-999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=a[i];
        if(s>m){
            m=s;
        }
        for(j=i+1;j<n;j++)
        {
            s=s+a[j];
            if(s>m)
            {
                m=s;
            }
        }
    }
    printf("%d",m);
}