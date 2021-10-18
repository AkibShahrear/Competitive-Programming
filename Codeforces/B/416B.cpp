#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int m , n;
    cin >> m >> n;
    if(n == 1)
    {
        vi ans;
        int sum = 0;
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sum += x;
            ans.push_back(sum);
        }
        for(int i = 0; i < m; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    else if(n == 2)
    {
        vi ans;
        int a = 0 , b = 0 , sum = 0;
        for(int i = 0; i < m; i++)
        {
            int x , y;
            cin >> x >> y;
            a += x;
            //b += y;
            sum = max(a , sum);
            sum += y;
            ans.push_back(sum);
        }
        for(int i = 0; i < m; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
      else if(n == 3)
    {
        vi ans;
        int a = 0 , b = 0 , sum = 0;
        for(int i = 0; i < m; i++)
        {
            int x , y, z;
            cin >> x >> y >> z;
            a += x;
            b = max(b , a);
            b += y;
            sum = max(sum , b);
            sum += z;
            ans.push_back(sum);
        }
        for(int i = 0; i < m; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
     else if(n == 4)
    {
        vi ans;
        int a = 0 , b = 0 , c = 0,sum = 0;
        for(int i = 0; i < m; i++)
        {
            int x , y, z , p;
            cin >> x >> y >> z >> p;
            a += x;
            b = max(b , a);
            b += y;
            c = max(c , b);
            c += z;
            sum = max(sum , c);
            sum += p;
            ans.push_back(sum);
        }
        for(int i = 0; i < m; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    else if(n == 5)
    {
        vi ans;
        int a = 0 , b = 0 , c = 0, d = 0,sum = 0;
        for(int i = 0; i < m; i++)
        {
            int x , y, z , q, p;
            cin >> x >> y >> z >> p >> q;
            a += x;
            b = max(b , a);
            b += y;
            c = max(c , b);
            c += z;
            d = max(d , c);
            d += p;
            sum = max(sum , d);
            sum += q;
            ans.push_back(sum);
        }
        for(int i = 0; i < m; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
