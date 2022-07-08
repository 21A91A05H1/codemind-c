#include<stdio.h>
int main()
{
    int n,i,a[100],c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        if(c>n/2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}