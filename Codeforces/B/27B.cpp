#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
vector< tuple<int, int , int> > v;
map<int , map<int , int>>mp;
map<int , int>win;
void solve()
{
   int n;
   cin >> n;
   int l = n*(n - 1)/2;
   for(int i = 1; i < l; i++)
   {
       int x , y;
       cin >> x >> y;
       //v.push_back({x , y, 1});
       mp[x][y] = 1;
       win[x]++;
   }
   int pos1 = 0 , pos2 = 0;
   for(int i = 1; i <= n; i++)
   {
       for(int j = i + 1; j <= n; j++)
       {
           if(mp[i][j] == 0 && mp[j][i] == 0)
           {
               pos1 = i;
               pos2 = j;
               break;
           }
       }
      if(pos1 != 0)
      {
          break;
      }
   }
   //cout<<pos1<<" "<<pos2<<'\n';
   if(win[pos1] > win[pos2])
   {
       cout<<pos1<<" "<<pos2;
   }
   else{
    cout<<pos2<<" "<<pos1<<'\n';
   }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;

}
