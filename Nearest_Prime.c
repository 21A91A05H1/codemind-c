#include<stdio.h>
int main()
{
    int n,i,np,sp,arr[100],j,k,d,e,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i];j>=arr[i]-10;j--)
        {c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                np=j;
                d=arr[i]-np;
                break;
            }
        }
        for(j=arr[i];j<=arr[i]+10;j++)
        {   c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                sp=j;
                e=sp-arr[i];
                break;
            }
        }
        if(d<e || d==e)
        {
            printf("%d
",np);
        }
        else
        {
            printf("%d
",sp);
        }
    }
    return 0;
}