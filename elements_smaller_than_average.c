#include<stdio.h>
int main()
{
    int n,i,arr[100],avg,s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg>=arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}