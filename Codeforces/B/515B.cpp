#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int> visb ,visg;
void solve()
{
    int n , m;
    cin >> n >> m;
    int cnt = n + m;
    int hb , hg;
    cin >> hb;
    vi b(hb);
    for(int i = 0; i < hb; i++)
    {
        cin >> b[i];
        visb[b[i]] = 1;
        cnt--;
    }
    cin >> hg;
    vi g(hg);
    for(int i = 0; i < hg; i++)
    {
        cin >> g[i];
        visg[g[i]] = 1;
        cnt--;
    }
    int i = 0;
    while(true)
    {
        if(cnt == 0)
        {
            cout<<"Yes";
            return;
        }

        int p = i%n;
        int q = i%m;
        if(visb[p] == 0 && visg[q] == 1)
        {
            visb[p] = 1;
            cnt--;
        }
        else if(visb[p] == 1 && visg[q] == 0)
        {
            visg[q] = 1;
            cnt--;
        }
        i++;

        if(i > (n * m*100))
        {
            cout<<"No";
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
