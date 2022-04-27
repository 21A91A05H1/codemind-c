#include<stdio.h>
int stringlen(char*str)
{
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        
    }
    return i;
}
int stringreverse(char*str)
{
    char temp;
    int i,j,len;
    len=stringlen(str);
    i=0;
    j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str1[100];
    scanf("%[^
]s",&str1);
    stringreverse(str1);
    printf("%s",str1);
    return 0;
}