#include<stdio.h>
int main()
{
    int n,i,arr[100],b[100],j,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                continue;
            }
            else
            {
                p=p*arr[j];
            }
        }
        b[i]=p;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}