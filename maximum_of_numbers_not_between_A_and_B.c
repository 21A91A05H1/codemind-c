#include<stdio.h>
int main()
{
    int arr[100],n,i,a,b,d=0,max=-999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                d++;
            }
        }
    }
    if(d>0)
    {
        printf("%d",max);
    }
    if(d==0)
    {
        printf("-1");
    }
}