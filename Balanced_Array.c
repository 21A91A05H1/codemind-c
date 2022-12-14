#include<stdio.h>
int main()
{
    long long int t,i,n,j,c=0,a[105],s1,s2,k;
    scanf("%lld",&t);
    while(t)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
        }
        c=0;
        for(i=0;i<n;i++)
        {
            s1=0;
            s2=0;
            for(j=i-1;j>=0;j--)
            {
                s1+=a[j];
            }
            for(k=i+1;k<n;k++)
            {
                s2+=a[k];
            }
            if(s1==s2)
            {
                c+=1;
            }
        }
        if(c==0)
        {
        printf("NO
");
        }
        else
        {
        printf("YES
");
        }
        
        t-=1;
        
    }
}