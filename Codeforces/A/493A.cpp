#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<int , int>hp,ap,hti,ati;
map<int , char>te;
void solve()
{
    string hm,aw;
    cin >> hm >> aw;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        char p;
        cin >> p;
        if(p == 'h')
        {
            int jersey;
            cin >> jersey;
            char card;
            cin >> card;
            if(card == 'y')
            {
                if(hp[jersey] < 2)
                {
                    hp[jersey]++;
                    if(hp[jersey] == 2)
                    {
                        hti[t] = jersey;
                        te[t] = p;
                    }
                }
            }
            else if(card == 'r')
                {
                if(hp[jersey] < 2)
                {
                    hp[jersey] = 2;
                    if(hp[jersey] == 2)
                    {
                        hti[t] = jersey;
                        te[t] = p;
                    }
                }
                }
        }
        else if(p == 'a')
        {
            int jersey;
            cin >> jersey;
            char card;
            cin >> card;
            if(card == 'y')
            {
                if(ap[jersey] < 2)
                {
                    ap[jersey]++;
                    if(ap[jersey] == 2)
                    {
                        ati[t] = jersey;
                        te[t] = p;
                    }
                }
            }
            else if(card == 'r')
                {
                if(ap[jersey] < 2)
                {
                    ap[jersey] = 2;
                    if(ap[jersey] == 2)
                    {
                        ati[t] = jersey;
                        te[t] = p;
                    }
                }
                }
        }
    }
    for(int i = 0; i <= 90; i++)
    {
        if(hti[i] > 0)
        {
            if(te[i] == 'h')
            {
                cout<<hm<<" ";
            }
            else{
                cout<<aw<<" ";
            }
            cout<<hti[i]<<" "<<i<<'\n';
        }
        else if(ati[i] > 0)
        {
            if(te[i] == 'h')
            {
                cout<<hm<<" ";
            }
            else{
                cout<<aw<<" ";
            }
            cout<<ati[i]<<" "<<i<<'\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
