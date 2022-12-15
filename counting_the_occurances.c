#include<stdio.h>
int main()
{
    int c=0,i;
    char s[1000],ch;
    scanf("%[^
]s",s);
    scanf(" %c",&ch);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==ch)
        {
            c++;
        }
    }
    if(c==0)
    printf("-1");
    else
    printf("%d",c);
}