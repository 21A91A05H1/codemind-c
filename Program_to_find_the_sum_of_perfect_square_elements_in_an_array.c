#include<stdio.h>
int square(int val)
{
    int i;
    for(i=1;i<=val;i++)
    {
        if(i*i==val)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[100],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(square(a[i]))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}