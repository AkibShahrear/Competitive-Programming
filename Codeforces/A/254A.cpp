#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int> mp;
vector<pair<int , int> >v;
int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int n;
   cin >> n;
  // vector<pair<int, int> > a;
   //vector<pair<int , int> >b;
   int cnt = 0;
   vi a(2*n);
   for(int i = 0; i < 2 * n; ++i)
   {
       cin >> a[i];
       --a[i];
   }
   const int mx = 5000;
   vector<int> b(mx , 0);
   for(int i = 0; i < 2*n; ++i){
    ++b[a[i]];
   }
   for(int i = 0; i < mx; ++i) {
    if(b[i] % 2 != 0)
    {
        cout<<-1;
        return 0;
    }
   }
   vector<int> c(mx , -1);
   for(int i = 0; i < 2 * n; ++i){
    if(c[a[i]] == -1) {
        c[a[i]] = i;
    }
    else{
        cout<<c[a[i]] + 1<<" "<<i + 1<<'\n';
        c[a[i]] = -1;
    }
   }
   return 0;
}
