#include<stdio.h>
int main()
{
    int i,s1=0,n,a[100],b[100],s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s1+=a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        s2+=b[i];
    }
    if(s1>=s2)
    {
        printf("0");
    }
    else
    {
        printf("%d",s2-s1);
    }
}