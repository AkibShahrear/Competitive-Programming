#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

struct test
{
    int x , y , z;
};


void solve()
{
   int n;
   cin >> n;
   vi a(n);
   ll sum = 0;
   vector<test> v;
   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
       sum += a[i];
   }
   int p;
   if(sum%n == 0)
   {
       p = sum/n;
   }
   else{
    cout<<"Unrecoverable configuration.";
    return;
   }
   bool is = 0;
   int cnt = 0;
   while(!is)
   {
       int pnt = 0, pos = 0, ok = 0;
       for(int i = 0; i < n; i++)
       {
           if(a[i] != p && is == 0)
           {
               if(a[i] > p)
               {
                   is = 1;
                   pnt = -(a[i] - p);
                   pos = i + 1;
                   a[i] = p;
                   ok++;
               }
               else if(a[i] < p)
               {
                   is = 1;
                   pnt = p - a[i];
                   pos = i + 1;
                   a[i] = p;
                   ok++;
               }
           }
           else if(a[i] != p && is == 1 )
           {
               if(a[i] > p && (pnt + (p - a[i])) == 0)
               {
                   is = 0;
                   //cout<<(a[i] - p)<<" ml. from cup #"<<pos<<" to  cup #"<<i + 1<<".\n";
                   v.push_back({(a[i] - p) , pos, i + 1});
                   a[i] = p;
                   cnt++;
                   ok++;
               }
               else if(a[i] < p && (pnt + (p - a[i]))== 0)
               {
                   is = 0;
                   //cout<<(p - a[i])<<" ml. from cup #"<<i + 1<<" to cup #"<<pos<<".\n";
                   v.pb({(p - a[i]) , i + 1, pos});
                   a[i] = p;
                   cnt++;
                   ok++;
               }
           }
       }
       if(ok == 0)
       {
           break;
       }
   }
   if(cnt == 0)
   {
       cout<<"Exemplary pages.";
       return;
   }
   if(is || v.size() > 1)
   {
       cout<<"Unrecoverable configuration.";
   }
   else{
    for(int i = 0; i < v.size(); i++)
    {
       cout<<v[i].x<<" ml. from cup #"<<v[i].y<<" to cup #"<<v[i].z<<".\n";
    }
   }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
