#include<stdio.h>
int main()
{
    int arr[100],c=0,i,j,d,n,k,cnt=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==0)
        {
            c++;
        }
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(c==k)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}