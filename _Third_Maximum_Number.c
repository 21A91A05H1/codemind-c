#include<stdio.h>
int main()
{
    int n,max1=-9999,max2=-9999,max3=-9999;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n==1)
    {
        printf("%d",arr[0]);
    }
    else if(n==2)
    {
        printf("%d",arr[1]);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>max1)
            max1=arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=max1)
            {
                if(arr[i]>max2)
                max2=arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=max1 && arr[i]!=max2)
            {
                if(arr[i]>max3)
                max3=arr[i];
            }
        }
        printf("%d",max3);
    }
}