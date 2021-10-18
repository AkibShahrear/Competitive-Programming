#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int ,  int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll>p(n);
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll a, b , c, d, e, pa = 0, pb = 0, pc = 0, pd = 0, pe = 0;
    cin >> a >> b >> c >> d >> e;
    ll res = 0;
    for(int i = 0; i < n; i++)
    {
     res += p[i];
    // cout<<"pa: "<<pa<<"\npb: "<<pb<<"\npc: "<<pc<<"\npd: "<<pd<<"\npe: "<<pe<<'\n';
     if(res >= e)
     {
          pe += res/e;
         res = res%e;
         if(res >= d)
         {
             pd += res/d;
             res = res%d;
             if(res >= c)
             {
                 pc += res/c;
                 res = res%c;
                 if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
             }
             else if(res >= b)
             {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
             }
             else if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
         }
          else if(res >= c)
             {
                 pc += res/c;
                 res = res%c;
                 if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
                else if(res >= a)
                  {
                         pa += res/a;
                         res = res%a;
                  }
             }
           else  if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
           else if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }

     }
     else if(res >= d)
     {
           pd += res/d;
         res = res%d;
         if(res >= c)
             {
                 pc += res/c;
                 res = res%c;
                 if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
             }
           else  if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
           else if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }

     }
     else if(res >= c)
     {
          pc += res/c;
         res = res%c;
         if(res >= b)
                 {
                     pb += res/b;
                     res = res%b;
                     if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
                 }
           else if(res >= a)
                     {
                         pa += res/a;
                         res = res%a;
                     }
     }
     else if(res >= b)
     {
         pb += res/b;
         res = res%b;
         if(res >= a)
         {
         pa += res/a;
         res = res%a;
        }
     }
     else if(res >= a)
     {
           pa += res/a;
         res = res%a;
     }
    }
    cout<<pa<<" "<<pb<<" "<<pc<<" "<<pd<<" "<<pe<<'\n';
    cout<<res<<'\n';
    return 0;
}
