#include<stdio.h>
int main()
{
    char s[100],l,s1;
    int i,m=0,sm=0,k=0,j,c=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=i+1;s[j]!=NULL;j++)
        {
            if(s[i]==s[j])
            {
                c+=1;
            }
        }
        if(c>m)
        {
            m=c;
            l=s[i];
        }
    }
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=i+1;s[j]!=NULL;j++)
        {
            if(s[i]==s[j])
            {
                c+=1;
            }
        }
    if(c>sm && s[i]!=l && c!=m)
        {
            sm=c;
            s1=s[i];
            k=1;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        printf("%c",s1);
    }
}