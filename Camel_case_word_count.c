#include<stdio.h>
int main()
{
    int i,c=1;
    char s[100];
    scanf("%[^
]s",s);
    for(i=1;s[i]!=NULL;i++)
    {
        if((int(s[i])>=65 && int(s[i])<=90) && (int(s[i+1])>=97 && int(s[i+1])<=122))
        {
            c+=1;
        }
    }
    printf("%d",c);
}