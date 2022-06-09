#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0,dc=0,arr[100];
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j && arr[i]>0)
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c==arr[i])
        {
            s=s+arr[i];
            dc++;
        }
    }
    if(dc==0)
    {
        printf("-1");
    }
    else
    {
        avg=(float)s/dc;
        printf("%.2f",avg);
    }
}