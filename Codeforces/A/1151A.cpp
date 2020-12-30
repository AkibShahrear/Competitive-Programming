#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

   // cout<<p;
   int cnt,mn=10000;
    for(int i=0;i<s.length()-3;i++)
    {
        cnt=0;
        int p=abs((int)((s[i]-'1')-('A'-'1')));
        cnt+=min(p,(26-p));
        int q=abs((int)((s[i+1]-'1')-('C'-'1')));
        cnt+=min(q,26-q);
        int r=abs((int)((s[i+2]-'1')-('T'-'1')));
        cnt+=min(r,26-r);
        int t=abs((int)((s[i+3]-'1')-('G'-'1')));
        cnt+=min(t,26-t);
       // cout<<"cnt: "<<cnt<<'\n';
        if(mn>cnt)
        {
            mn=cnt;
        }

    }
    cout<<mn;
}
