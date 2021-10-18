#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
int m;
cin >> m;
vi v[20];
int mx = 0;
for(int i = 0; i < m; i++)
{
    int x , y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
}
int cnt = 0;
for(int i = 1; i <= 5; i++)
{
    if(v[i].size() >= 3)
    {
        cout<<"WIN";
        return;
    }
    else if(v[i].size() == 0 || v[i].size() == 1){
            //cnt++;
                cout<<"WIN";
                return;
    }
}
cout<<"FAIL";
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
