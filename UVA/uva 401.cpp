#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,t,n,i,j;
    char s[100];
    gets(s);
    int len=strlen(s);
    for( i=0;i<(len/2);i++)
    {
        //cout<<s[i]<<'\n';
    }
    for( j=len;j>len/2;j--)
    {
        //cout<<s[j]<<'\n';
    }
    if(s[i]==s[j])
    {
        cout<<"Palindrome";
    }

}
