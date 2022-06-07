#include<stdio.h>
int main()
{
    char str[100];
    int i,x,y;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            x++;
        }
        if(str[i]=='o')
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}