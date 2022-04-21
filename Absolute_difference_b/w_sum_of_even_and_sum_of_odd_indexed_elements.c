#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],os=0,es=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            os=os+arr[i];
        }
        else
        {
            es=es+arr[i];
        }
    }
    printf("%d",abs(es-os));
}