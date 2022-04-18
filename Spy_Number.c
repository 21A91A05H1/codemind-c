#include<stdio.h>
int main()
{
    int num,s=0,p=1,d;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        s=s+d;
        p=p*d;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}