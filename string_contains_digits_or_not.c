#include<stdio.h>
int main()
{
    int T,t,i,c;
    char s[100];
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%s",s);
        c=0;
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("No
");
        }
        else
        printf("Yes
");
    }
}