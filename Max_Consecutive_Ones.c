#include<stdio.h>
int main()
{
    int i,arr[100],n,c,max=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c>max)
        {
            max=c;
        }
        }
    }
    
    printf("%d",max);
}