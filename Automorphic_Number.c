#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int n,l,c=0,t,s;
 scanf("%d",&n);
 s=n*n;
 t=n;
 while(t>0)
 {
     c++;
     t=t/10;
 }
 int d=floor(pow(10,c));
 l=s%d;
 if(l==n)
 printf("Automorphic Number");
 else
 {
     printf("Not an Automorphic Number");
 }
} 
