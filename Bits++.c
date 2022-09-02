#include<stdio.h>
int main()
{
    int n,i,c=0;
    char s[100];
    scanf("%d",&n);
    while(n)
    {
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]=='+' && s[i+1]=='+')
            {
                c+=1;
            }
            else if(s[i]=='-' && s[i+1]=='-')
            {
                c-=1;
            }
            else
            {
                continue;
            }
        }
        n-=1;
    }
    printf("%d",c);
}