#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0,k,arr[100];
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
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
        if(c==k)
        {
            s++;
            printf("%d ",arr[i]);
        }
    }
    if(s==0)
    {
        printf("-1");
    }
}