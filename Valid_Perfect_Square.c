#include<stdio.h>
#include<math.h>
void isvalid(int *arr,int n)
{
    int i,sq=0;
    for(i=0;i<n;i++)
    {
        sq=pow(arr[i],0.5);
            if(sq*sq==arr[i])
            {
                printf("True
");
            }
            else
            {
                printf("False
");
            }
    }
}
int main()
{
    int n,arr[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        isvalid(arr,n);
    
}