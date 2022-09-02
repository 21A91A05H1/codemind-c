#include<stdio.h>
int main()
{
    int i,c=0,j,max=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=1;
        for(j=i+1;s[j]!=NULL;j++)
        {
            if(s[i]!=s[j])
            {
                break;
            }
            else
            {
                c+=1;
            }
        }
        if(c>max)
        {
            max=c;
        }
    }
    printf("%d",max);
}