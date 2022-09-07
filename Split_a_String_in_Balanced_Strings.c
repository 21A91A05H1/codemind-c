#include<stdio.h>
int bss(char *s)
{
    int m=0,e=0,c=0,i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='L')
        {
            c+=1;
        }
        else
        {
            e+=1;
        }
        if(c==e)
        {
            m+=1;
        }
    }
    return m;
}
int main()
{
    int i;
    char s[10];
    scanf("%s",s);
    printf("%d",bss(s));
}