#include<stdio.h>
void fun(int *arr,int n)
{
    int i,s=0,r;
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            r=arr[i]%10;
            arr[i]=arr[i]/10;
            s=s+r;
        }
    }
    printf("%d",s);
}
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   fun(arr,n);
}