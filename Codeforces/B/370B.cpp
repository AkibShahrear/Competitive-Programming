#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>mp;
map<int , int>sta;
set <int> s[220];
void solve()
{
    int n;
    cin >> n;
   for(int i = 0; i < n; i++)
   {
       int m; cin >> m;
       for(int j = 0; j < m; j++)
       {
           int k; cin >> k;
           s[i].insert(k);
       }
   }
   for(int i = 0; i < n; i++)
   {
       int is = 1;
       for(int j = 0; j < n && is; j++)
       {
           if(i == j) continue;
           int f = 0;
           for(set <int> :: iterator it = s[j].begin(); it != s[j].end(); it++)
           {
               if(s[i].find(*it) == s[i].end()){
                f = 1;
                break;
               }
           }
           if(!f){
            is = 0;
            break;
           }
       }
       if(is) puts("YES");
       else puts("NO");
   }
}

int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
