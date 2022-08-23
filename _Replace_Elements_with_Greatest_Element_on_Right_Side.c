#include<stdio.h>
int main()
{
    int i,n,arr[100],t,j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        arr[i]=max;
    }
    arr[n-1]=-1;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}