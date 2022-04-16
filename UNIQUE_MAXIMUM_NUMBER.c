#include<stdio.h>
int main()
{
    int x[20],n,i,j,c=0,max=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                {
                    c++;
                    break;
                }
            }
            
        }
        if(c==0)
        {
            if(x[i]>max)
            {
                max=x[i];
            }
             
            
        }
        
    }
    
   if(max==0)
   {
       printf("-1");
   }
    else
    {
        printf("%d",max);
    }
}