#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,t;
    while(scanf("%d",&n)!=EOF)
    {
      for(int i=0;i<n;i++)
      {
          char s[100];
          gets(s);
          //cin>>char t[20]>>int a>>int b>>endl;
          //if(strcmp(s,t)==0)
          int len =strlen(s);
          cout<<len;
          for(int j=0;j<len;j++)
          {
          if(s[j]==' ')
          {
              break;
         cout<<s;
          }
      }
      }
      /*for(int i=0;i<n;i++)
      {
          char t[20];
          cin>>t
      }*/
    }
}
