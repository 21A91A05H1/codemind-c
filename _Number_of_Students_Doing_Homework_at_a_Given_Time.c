#include<stdio.h>
int main()
{
    int i,n,m,k,a[100],b[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c=1;
        }
        else if(b[i]==k)
        {
            c=1;
        }
        else if(a[i]<k && b[i]>k)
        {
            c+=1;
        }
        else
        {
            continue;
        }
    }
    printf("%d",c);
}