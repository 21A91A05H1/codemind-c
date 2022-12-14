#include<stdio.h>
int main()
{
    int t,i,n,a[100],m=0,s,p;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        s=0;
        p=1;
        for(i=0;i<n-1;i++)
        {
            s+=a[i];
        }
        p=(p*n*(n+1))/2;
        printf("%d
",p-s);
        t-=1;
    }
    
}