#include<stdio.h>
int main()
{
    unsigned long long int sum=0,arr[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%llu",sum);
    
}