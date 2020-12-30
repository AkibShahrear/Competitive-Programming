#include<bits/stdc++.h>
using namespace std;
char s1[300],s2[300];

int main()
{
    gets(s1);
    gets(s2);
    //cout<<strlen(s1)<<"\n"<<s2;
    vector<string>v;

  /*  for(int j=0;j<strlen(s2);j++){
            string s="";
    for(int i=j;i<strlen(s2);i++)
    {

        if(s2[i]==' ' || i==strlen(s2)-1)
        {
            j=i;
            break;

        }
        else{
            s+=s2[i];
        }


    }
    //cout<<"j: "<<j<<'\n';
    if(j==strlen(s2)-1)
    {
        int p=strlen(s2)-1;
        s+=s2[p];
    }
    //cout<<s<<'\n';
    v.push_back(s);

    }
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        string p = v[i];
        int k = p.length();

        for(int j = 0;j<strlen(s1);j++)
        {
            string h="";

           for(int u=j;u<j+k;u++)
           {
               if(s1[u]!=' '){
               h+=s1[u];
               }
           }

     cout<<"h: "<<h<<" p: "<<p<<'\n';
         if(h==p)
         {

             cnt++;
             break;
         }
        }

    }
    cout<<cnt;*/
    int cnt=0,pnt=0;
    for(int i=0;i<strlen(s2);i++)
    {
        char p=s2[i];
        if(isalpha(p))
        {
            pnt++;
        }

        for(int j=0;j<strlen(s1);j++)
        {
            if(isalpha(s1[j])){
            if(p==s1[j])
            {
                cnt++;
                s1[j]='0';
                break;
            }
            }
        }

    }
   // cout<<"cnt: "<<cnt<<" pnt: "<<pnt<<'\n';
  if(cnt==pnt)
  {
      cout<<"YES";
  }
  else{
    cout<<"NO";
  }

}
