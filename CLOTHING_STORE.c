#include<stdio.h>
int main()
{
    int n,a[100],i,j,k=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        k=k+c%2;
    }
    printf("%d",k);
}