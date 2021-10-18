#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
void solve()
{
    int n , m;
    cin >> n >> m;
    vi l , r;
    if(m == 0)
    {
        cout<<n;
        return;
    }
    for(int i = 0; i < m ; i++)
    {
        string a , b , c , d;
        int num = 0;
        //gets(s);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> num;
        int q = num;
        //cout<<"a: "<<a<<'\n';
        if(c == "left")
        {
            l.push_back(q);
        }
        else if(c == "right")
        {
            r.push_back(q);
        }
    }

   if(l.size() == 0)
   {
       sort(r.begin() , r.end());
       int u = r.size() - 1;
       if(n - r[u] == 0)
       {
           cout<<-1;
           return;
       }
       cout<< n - r[u];
       return;
   }
   if(r.size() == 0)
   {
       sort(l.begin() , l.end());
       if(l[0] == 1)
       {
           cout<<-1;
           return;
       }
       cout<<l[0] - 0 - 1;
       return;
   }
    sort(l.begin() , l.end());
    sort(r.begin() , r.end());
    int u = r.size() - 1;
    int v = r[u] + 1;
    int w = l[0] - 1;
    if(v > n || w < 0)
    {
        cout<<-1;
        return;
    }
    if(v > w)
    {
        cout<<-1;
    }
    else{
        cout<<w - v + 1;
    }

}

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
