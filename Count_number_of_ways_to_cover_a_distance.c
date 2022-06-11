#include<stdio.h>
int count(int d)
{
    if(d<0)
    {
        return 0;
    }
    if(d==0)
    {
        return 1;
    }
    return (count(d-1)+count(d-2)+count(d-3));
}
int main()
{
    int d;
    scanf("%d",&d);
    printf("%d",count(d));
}