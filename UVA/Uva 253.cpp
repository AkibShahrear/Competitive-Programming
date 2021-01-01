#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[14];
    while(gets(s))
    {
        int r1=0,g1=0,b1=0;
        int r=0,g=0,b=0;
      int len=strlen(s)/2;
      for(int i=0;i<6;i++)
      {
          if(s[i]=='r')
          {
              r++;
          }
          else if(s[i]=='g')
          {
              g++;
          }
          else if(s[i]=='b')
          {
              b++;
          }
      }
      for(int j=6;j<12;j++)
      {

          if(s[j]=='r')
          {
              r1++;
          }
          else if(s[j]=='g')
          {
              g1++;
          }
          else if(s[j]=='b')
          {
              b1++;
          }
      }
      if((r1==r && g1==g && b1==b) &&)
      {
          printf("True\n");
      }
      else {

        printf("False\n");
      }
    }
}
