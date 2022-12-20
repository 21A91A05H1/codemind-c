#include<stdio.h>
int main()
{
    int i,n,a[100],j,c=0,k=0,b[100];
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
            if(a[i]<a[j])
            {
                c+=1;
                b[k++]=c;
                break;
            }
            else
            {
               c+=1;
               if(j==n-1)
               {
                   c=0;
                   b[k++]=c;
                   break;
               }
            }
        }
        printf("%d ",c);
    }
    
}