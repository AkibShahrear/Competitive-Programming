#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define pb push_back
int numlen(int a)
{
   int cnt  = 0;
    while(a)
    {
        a /= 10;
        cnt++;
    }
    return cnt;
}
void solve()
{
    int a , b , n;
    cin >> a >> b >> n;
    ll num = -1;

    for(int i = 0; i <= 9; i++)
    {
       ll p = a * 10;
       p += i;
       if(p % b == 0)
       {
           num = p;
           break;
       }
    }
    if(num == -1)
    {
        cout << num <<'\n';
    }
    else{
        cout<<num;
        //cout<<"len: "<<numlen(b)<<'\n';
        for(int i = 1; i < n; i++)
        {
            cout<<0;
        }
    }
}

int main(int argc , char ** argv)
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
