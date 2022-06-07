#include<stdio.h>
int main()
{
    int i,c;
    char s[100];
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
            printf("Doesn't contain digit");
        }
        else
        printf("Contains %d digit",c);
}