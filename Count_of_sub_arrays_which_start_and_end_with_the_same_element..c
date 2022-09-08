#include<stdio.h>
int main()
{
    int i,j,arr[100],n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j] && i<j)
            {
                c+=1;
            }
        }
    }
    printf("%d",c+n);
}