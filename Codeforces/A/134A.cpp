#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef pair<int ,int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vi sel;
    for(int i = 0; i < n; i++)
    {
        ll p = sum - a[i];
        int q = p/(n -1);
        int l = p % (n - 1);
        //cout<<"q: "<<q<<'\n';
        if(l == 0 && q == a[i])
        {
            sel.push_back((i + 1));
        }
    }
    cout<<sel.size()<<'\n';
    for(int i = 0; i < sel.size(); i++)
    {
        cout<<sel[i]<<" ";
    }


    return 0;
}
