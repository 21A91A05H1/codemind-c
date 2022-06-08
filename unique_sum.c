#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}