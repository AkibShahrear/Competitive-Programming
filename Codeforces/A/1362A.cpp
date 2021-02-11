#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long a,b;
    cin>>a>>b;
    long long p=max(a,b);
    long long j =min(a,b);
    long long k=p/j;
    if(a==b){
    cout<<0<<'\n';
    }
      else if(p%j!=0)
    {
    cout<<-1<<'\n';
    }
    else if(p%2!=0 && j%2!=0)
    {
        cout<<-1<<'\n';

    }

    else{
            int cnt=0;
             p=p/j;
            //cout<<"p: "<<p<<'\n';


            while(p)
            {

                 if(p%8==0)
                {
                    p/=8;
                    cnt++;
                }
                else if(p%4==0)
                {
                    p/=4;
                    cnt++;
                }
                else if(p%2==0)
                {
                    p/=2;
                    cnt++;
                }
                else{
                    break;
                }
            }
           // cout<<"p: "<<p<<'\n';

            if(cnt==0 || p!=1)
            {
                cout<<-1<<'\n';
            }
            else{
            cout<<cnt<<'\n';
            }

        }
      /* else if(a<b)
        {
            int cnt=0;
            while(b)
            {
                if(b%8==0)
                {
                    b/=8;
                    cnt++;
                }
                else if(b%4==0)
                {
                    b/=4;
                    cnt++;
                }
                else if(b%2==0)
                {
                    b/=2;
                    cnt++;
                }
                else{
                    break;
                }
            }

        }

*/

    }

    }

