#include<stdio.h>
int main()
{
    int l,r,s,c=0,i,j;
    scanf("%d",&l);
    scanf("%d",&r);
    for(i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            c+=1;
        }
    }
    for(i=l;i<=r;i++)
    { 
        s=i;
        for(j=i+1;j<=r;j++)
        {
            s=s+j;
            if(s%2!=0)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}