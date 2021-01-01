#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[100],t[100];
    while(cin>>s && cin>>t)
    {
        int len1 = strlen(s);
        int len2 = strlen(t);

        if(len2<len1)
        {
            cout<<"No\n";
        }
        else if(len1==len2)
        {


                    if(strcmp(s,t)==0)
                    {
                        cout<<"Yes\n";
                    }
                    else
                        cout<<"No\n";
                }
         else if (len2>len1)
         {
             int i,j,tmp=0;
             char arr[100];
             for(i=0;i<len1;i++)
             {
                 char arr[]={0};
                 for(j=0;j<len2;j++)
                    if(s[i]==t[j])
                 {

                     arr += s[i];

                 }
                 cout<<arr;
                 if(strcmp(arr,s)==0)
                 {
                     cout<<"Yes\n";
                 }
                 else
                    cout<<"No\n";
             }

         }

            }

}




