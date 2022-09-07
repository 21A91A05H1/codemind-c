#include<stdio.h>
#include<math.h>
int nfib(int num)
{
    int f,s,t,ans,k;
    if(num==0)
    {
        printf("0");
        return 0;
    }
    f=0;
    s=1;
    t=f+s;
    while(t<=num)
    {
        f=s;
        s=t;
        t=f+s;
    }
    if(abs(t-num)>=abs(s-num))
    {
        ans=s;
    }
    else
    {
        ans=t;
    }
    k=ans;
    return k;
}
int fi(int nu)
{
    int n1,n2,nefi;
    n1=0;
    n2=1;
    nefi=n1+n2;
    while(nefi<=nu)
    {
        n1=n2;
        n2=nefi;
        nefi=n1+n2;
    }
    return nefi;
}
int main()
{
    int nefi,n,k;
    scanf("%d",&n);
    nefi=fi(n);
    k=nfib(n);
    if((n-k)>(nefi-n))
    {
        printf("%d ",nefi);
    }
    else if((n-k)==(nefi-n))
    printf("%d %d",k,nefi);
    else
    printf("%d",k);
}