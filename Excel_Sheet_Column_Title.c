#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int n,r,i=0;
    cin>>n;
    while(n>0)
    {
        r=n%26;
        if(r==0)
        {
            s[i++]='Z';
            n=(n/26)-1;
        }
        else
        {
            s[i++]=(r-1)+'A';
            n=n/26;
        }
    }
    s[i]=NULL;
    reverse(s,s+strlen(s));
    cout<<s;
    
}