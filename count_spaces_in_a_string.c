#include<stdio.h>
int main()
{
   char str[100],i;
   int upper = 0, lower = 0, number = 0, special = 0,whitesp=0;
   scanf("%[^
]s",str);
   for (i = 0; i < str[i]!=NULL; i++)
   {
      if (str[i] >= 'A' && str[i] <= 'Z')
         upper++;
      else if (str[i] >= 'a' && str[i] <= 'z')
         lower++;
      else if (str[i]>= '0' && str[i]<= '9')
         number++;
      else if(str[i]==' ')
         whitesp++;
      else
         special++;
   }
   printf("%d ",whitesp);
}
