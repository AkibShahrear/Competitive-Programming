#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0;
        for(int j=i;j<n;j++)
        {
            cout<<"s[j]: "<<s[j]<<'\n';
          switch(s[j])
                 {
                  case 'U':a--;break;
                  case 'D':a++;break;
                  case 'L':b--;break;
                  case 'R':b++;break;
                 }


            if(a==0 && b==0)
            {
                cnt++;
            }
        }

    }

        cout<<cnt;

}
