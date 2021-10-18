#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<pi , int>mp;
void solve()
{
   int n , m;
   cin >> n >> m;
   for(int k = 0; k < m; k++)
   {
       int x , y;
       cin >> x >> y;
       x--;
       y--;
       mp[{x,y}] = 1;
       int a = y + 1;
       int b = y + 2;
       int c = y - 1;
       int d = y - 2;
       if(k >= 8){
       if(x + 2 < n)
       {
           if(mp[{x , y}] == 1 && mp[{x , y + 1}] == 1 && mp[{x , y + 2}] == 1)
            {
                if( mp[{x + 1 , y}] == 1 && mp[{x + 1 , y + 1}] == 1 && mp[{x + 1, y + 2}] == 1 && mp[{x + 2, y}] == 1 && mp[{x + 2, y + 1}] == 1 && mp[{x + 2, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y + 2}] == 1 && mp[{x - 2, y}] == 1 && mp[{x - 2, y + 1}] == 1 && mp[{x - 2, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                 else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y + 2}] == 1 && mp[{x + 1, y}] == 1 && mp[{x + 1, y + 1}] == 1 && mp[{x + 1, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
            }
            if(mp[{x , y}] == 1 && mp[{x , y + 1}] == 1 && mp[{x , y - 1}] == 1)
            {
                if( mp[{x + 1 , y}] == 1 && mp[{x + 1 , y + 1}] == 1 && mp[{x + 1, y - 1}] == 1 && mp[{x + 2, y}] == 1 && mp[{x + 2, y + 1}] == 1 && mp[{x + 2, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y - 1}] == 1 && mp[{x - 2, y}] == 1 && mp[{x - 2, y + 1}] == 1 && mp[{x - 2, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                 else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y - 1}] == 1 && mp[{x + 1, y}] == 1 && mp[{x + 1, y + 1}] == 1 && mp[{x + 1, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
            }
       }
       if(x - 2 >= 0)
       {
           if(mp[{x , y}] == 1 && mp[{x , y - 1}] == 1 && mp[{x , y - 2}] == 1)
            {
                if((x + 2) < n && mp[{x + 1 , y}] == 1 && mp[{x + 1 , y - 1}] == 1 && mp[{x + 1, y - 2}] == 1 && mp[{x + 2, y}] == 1 && mp[{x + 2, y - 1}] == 1 && mp[{x + 2, y - 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                else if((x - 2) >= 0 && mp[{x - 1 , y}] == 1 && mp[{x - 1 , y - 1}] == 1 && mp[{x - 1, y - 2}] == 1 && mp[{x - 2, y}] == 1 && mp[{x - 2, y - 1}] == 1 && mp[{x - 2, y - 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                 else if((x - 1) >= 0 && (x + 1) < n && mp[{x - 1 , y}] == 1 && mp[{x - 1 , y - 1}] == 1 && mp[{x - 1, y - 2}] == 1 && mp[{x + 1, y}] == 1 && mp[{x + 1, y - 1}] == 1 && mp[{x + 1, y - 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
            }
            if(mp[{x , y}] == 1 && mp[{x , y + 1}] == 1 && mp[{x , y - 1}] == 1)
            {
                if( mp[{x + 1 , y}] == 1 && mp[{x + 1 , y + 1}] == 1 && mp[{x + 1, y - 1}] == 1 && mp[{x + 2, y}] == 1 && mp[{x + 2, y + 1}] == 1 && mp[{x + 2, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y - 1}] == 1 && mp[{x - 2, y}] == 1 && mp[{x - 2, y + 1}] == 1 && mp[{x - 2, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                 else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y - 1}] == 1 && mp[{x + 1, y}] == 1 && mp[{x + 1, y + 1}] == 1 && mp[{x + 1, y - 1}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
            }
            if(mp[{x , y}] == 1 && mp[{x , y + 1}] == 1 && mp[{x , y + 2}] == 1)
            {
                /*if( mp[{x + 1 , y}] == 1 && mp[{x + 1 , y + 1}] == 1 && mp[{x + 1, y + 2}] == 1 && mp[{x + 2, y}] == 1 && mp[{x + 2, y + 1}] == 1 && mp[{x + 2, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }*/
                 if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y + 2}] == 1 && mp[{x - 2, y}] == 1 && mp[{x - 2, y + 1}] == 1 && mp[{x - 2, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
                 else if( mp[{x - 1 , y}] == 1 && mp[{x - 1 , y + 1}] == 1 && mp[{x - 1, y + 2}] == 1 && mp[{x + 1, y}] == 1 && mp[{x + 1, y + 1}] == 1 && mp[{x + 1, y + 2}] == 1)
                    {
                        cout<<k + 1;
                        return;
                    }
            }
       }
       }
   }

   cout<<-1;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
