#include<stdio.h>
int main()
{
    char str[100];
    int i,dc=0,vc=0,c=0,s=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'| str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vc++;
        }
        else if(str[i]==' ')
        {
            s++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dc++;
        }
        else
        {
            c++;
        }
        
    }
    printf("Vowels: %d
",vc);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",dc);
    printf("White spaces: %d",s);
}