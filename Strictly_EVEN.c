#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            m++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            c++;
        }
    }
    if(c==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}