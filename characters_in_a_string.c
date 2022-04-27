#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,c=0;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        i++;
        c++;
    }
    printf("%d",c);
    return 0;
    
}