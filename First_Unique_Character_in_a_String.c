#include<stdio.h>
int main()
{
    int i,c=0,d=0,j,m;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=1;
        for(j=0;s[j]!=NULL;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(s[i]==s[j])
            {
                c+=1;
            }
        }
        if(c==1)
        {
            m=i;
            d+=1;
            break;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}