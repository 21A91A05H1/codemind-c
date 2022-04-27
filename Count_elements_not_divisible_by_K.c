#include<stdio.h>
int divk(int*arr,int n,int k)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,arr[100],i,k,e;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    e=divk(arr,n,k);
    printf("%d",e);
}
