#include<stdio.h>
int search(int *arr,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(search(arr,n,k))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}