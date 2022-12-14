#include<stdio.h>
int main()
{
    int i,n,c=0,j,t;
    char a[100];
    scanf("%d",&t);
    while(t)
    {
    scanf("%d",&n);
    scanf("%s",a);
    c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            c+=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]=='1')
                {
                    c+=1;
                }
            }
        }
    }
    printf("%d
",c);
    t-=1;
    }
}