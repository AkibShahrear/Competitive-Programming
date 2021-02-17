/*
n packages
init (0,0)
i package --> (xi,yi)
can only move --> U((x,y) -->(x+1,y)
                    R((x,y) -->(x,y+1)
minimum moves
lexicographiclly smallest path

*/
#include<bits/stdc++.h>
using namespace std;

int x[1011],y[1011];
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int> >v(n);
        for (int i = 0;i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
           // v.push_back(make_pair(x[i],y[i]));
        }
        sort(v.begin(),v.end());
       pair<int, int> cur = make_pair(0,0);
       string p;
       bool is = 1;
       for(int i = 0; i < n; i++)
       {
           int r = v[i].first - cur.first;
           int u = v[i].second - cur.second;
           if(r < 0 || u < 0)
           {
               cout<<"NO\n";
               is = 0;
               break;
           }
           p += string(r,'R');
           cout<<"p: "<<p<<'\n';
           p += string(u,'U');
           cur = v[i];
           cout<<"p: "<<p<<'\n';
       }
       if(is)
       {
           cout<<"YES\n";
           cout<<p<<'\n';
       }
        }
}
