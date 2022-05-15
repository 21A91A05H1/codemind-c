#include<stdio.h>
int main()
{
    char str[100],i;
    int l=0,u=0,ch=0,whitesp=0,n=0,sp=0;
    scanf("%[^
]s",str);
    for(i=0;i<str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        continue;
        else
        ch++;
    }
    printf("%d",ch);
}