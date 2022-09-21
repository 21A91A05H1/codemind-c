#include<stdio.h>
int main()
{
    int i,x=0,y=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='R')
        {
            x++;
        }
        if(s[i]=='L')
        {
            x--;
        }
        if(s[i]=='U')
        {
            y++;
        }
        if(s[i]=='D')
        {
            y--;
        }
    }
    if(x==0 && y==0)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}