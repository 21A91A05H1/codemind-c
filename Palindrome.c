#include<stdio.h>
int main()
{
    int rn=0,d,num,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        rn=(rn*10)+d;
    }
    if(temp==rn)
    {
        printf("True");
    }
    else
    {
      printf("False");  
    }
}