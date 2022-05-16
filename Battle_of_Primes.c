                                                                #include<stdio.h>
int main()
{
    int a,b,c,i,j,fact;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=c+1;i>c;i++)
    {
        fact=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            printf("%d",i-c);
            break;
        }
    }
}