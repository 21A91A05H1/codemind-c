#include<stdio.h>
int main()
{
    int T,t,x,y;
    scanf("%d",&T);
    t=1;
    while(t<=T)
    {
        scanf("%d%d",&x,&y);
        printf("%d
",x+y);
        t++;
    }
}