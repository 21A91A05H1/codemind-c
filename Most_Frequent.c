#include<stdio.h>
int main()
{
    int i,a[100],m=0,k=0,n,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        if(c==m)
        {
            if(k>a[i])
            {
                k=a[i];
            }
        }
         if(c>m)
        {
            m=c;
            k=a[i];
        }
    }
    printf("%d",k);
}