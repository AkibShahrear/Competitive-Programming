#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int ,int>num;
map<int , int>pos, pos1, p;
void solve(){
int n;
cin >> n;
vi a(n);
int mx = 0;
int cnt = 0;
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    mx = max(a[i] , mx);
    num[a[i]]++;
    if(num[a[i]] == 1)
    {
        pos[a[i]] = i;
        p[a[i]] = 0;
    }
    if(num[a[i]] == 2)
    {
        p[a[i]] = i - pos[a[i]];
        pos[a[i]] = i;
    }
    else{
        int l = i - pos[a[i]];
        if(l != p[a[i]])
        {
            //cnt++;
            p[a[i]] = -1;
        }
        pos[a[i]] = i;
    }
}
sort(a.begin() , a.end());
vi v;
v.push_back(a[0]);
if(p[a[0]] == -1){cnt++;}
for(int i = 0; i < (n - 1); i++)
{
    if(a[i] != a[i + 1])
    {
        v.push_back(a[i + 1]);
        if(p[a[i + 1]] == -1){cnt++;}
    }
}
//cout<<"cnt: "<<cnt<<'\n';
cout<<v.size() - cnt<<'\n';
for(int i = 0; i < v.size(); i++)
{
    if(p[v[i]] != -1)
    {
        cout<<v[i]<<" "<<p[v[i]] <<'\n';

    }
    //num[a[i]]++;
}
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);
solve();
return 0;
}
