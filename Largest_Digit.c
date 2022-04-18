#include<stdio.h>
int main()
{
    int num,d,max=0;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        if(max<=d)
        {
            max=d;
        }
    }
    printf("%d",max);
    return 0;
}