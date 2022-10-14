#include<stdio.h>
int main()
{
    int n,k,c=0,d=0,a[100],i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            c+=1;
        }
        else{
            d+=1;
            if(d==2)
            {
                break;
            }
        }
    }
    printf("%d",c);
}