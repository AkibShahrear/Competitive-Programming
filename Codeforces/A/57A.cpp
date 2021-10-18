#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int p = 0, q = 0;
    if(x1 == 0 && y1 == 0)
    {
        if(x2 == 0 && y2 > 0)
        {
            cout<<y2;
            return;
        }
        else if(y2 == 0 && x2 > 0)
        {
            cout<<x2;
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<n+x2;
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<n + y2;
            return;
        }
    }
    else if(x1 == n && y1 == n)
    {
         if(x2 == 0 && y2 > 0)
        {
            cout<<n + y2;
            return;
        }
        else if(y2 == 0 && x2 > 0)
        {
            cout<<x2 + n;
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<n - x2;
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<n - y2;
            return;
        }
    }
    else if(x1 == 0 && y1 > 0)
    {
         if(x2 == 0 && y2 >= 0)
        {
            cout<<abs(y2 - y1);
            return;
        }
        else if(y2 == 0 && x2 > 0)
        {
            cout<<y1 + x2;
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<(n - y1) + x2;
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<min(((n - y1) + n + (n - y2)),(y1 + n + y2));
            return;
        }
    }
    else if(y1 == 0 && x1 > 0)
    {
        if(x2 == 0 && y2 > 0)
        {
            cout<<x1 + y2;
            return;
        }
        else if(y2 == 0 && x2 >= 0)
        {
            cout<<abs(x2 - x1);
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<min(((n - x1) + n + (n - x2)),(x1 + n + x2));
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<(n - x1) + y2;
            return;
        }
    }
    else if(y1 == n && x1 > 0)
    {
        if(x2 == 0 && y2 > 0)
        {
            cout<<x1 + (n - y2);
            return;
        }
        else if(y2 == 0 && x2 > 0)
        {
            cout<<min(((n - x1) + n + (n - x2)),(x1 + n + x2));
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<abs(x1 - x2);
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<(n - x1) + (n - y2);
            return;
        }
    }
    else if(x1 == n && y1 > 0)
    {
        if(x2 == 0 && y2 > 0)
        {
            cout<<min(((n - y1) + n + (n - y2)),(y1 + n + y2));;
            return;
        }
        else if(y2 == 0 && x2 > 0)
        {
            cout<<y1+(n - x2);
            return;
        }
        else if(x2 > 0 && y2 == n)
        {
            cout<<(n - y1)+(n - x2);
            return;
        }
        else if(x2 == n && y2 > 0)
        {
            cout<<abs(y1 - y2);
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
