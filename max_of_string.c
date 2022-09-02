#include<stdio.h>
int main()
{
    int b[100],i,k=0,max=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(int(s[i])>max)
        {
            max=int(s[i]);
        }
    }
    printf("%c",char(max));
    
}