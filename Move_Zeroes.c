#include<stdio.h>
void zeros(int *arr,int n)
{
    int count={0},i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        arr[count++]=arr[i];
    }
    while(count<n)
    arr[count++]=0;
}
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    zeros(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}