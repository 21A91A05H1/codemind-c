#include<stdio.h>
int main()
{
    int n,i,a[100],max=-999,c=0,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max && a[i]>0)
        {
            max=a[i];
        }
        
    }
    for(i=1;i<=max;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==a[j]){
            c=1;
            break;}
        }
        if(c==0)
        {
        printf("%d",i);
        k=1;
        break;
        }
    }
    if(k==0)
    printf("%d",max+1);
   
}