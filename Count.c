#include<stdio.h>
int main()
{
    int i,arr[100],n,es=0,os=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es++;
        }
        else
        {
            os++;
        }
    }
    printf("%d %d",es,os);
}