#include<stdio.h>
int main()
{
    char str[20];
    int i,c=0,f=0,T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
    scanf("%s",str);
    c=0;f=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c++;
        }
        else
        {
            f++;
        }
    }
    if(f>0)
    {
        printf("False
");
    }
    else
    {
        printf("True
");
    }
    }
}