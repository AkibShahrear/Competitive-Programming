#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
map<char , int> mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    int k;
    cin >> k;
    if(s.size() < k)
    {
        cout<<0;
        return 0;
    }
    vector< pair<int, char> >v;
   // sort(mp.begin(), mp.end());
    for(int i = 0; i < 26; i++)
    {
      //  cout<<mp['a' + i]<<'\n';
        if(mp['a' + i] > 0){
        v.push_back({mp['a' + i], ('a' + i)});
        }
    }
    sort(v.begin() , v.end());

    int l = k, j = 0;
    while(true){
        if(l <= 0)
        {

            break;
        }
        if(l >= v[j].first ){
        mp[v[j].second] = 0;
         l -= v[j].first;
         j++;
         }
        else {
            l -= v[j].first;
        }
         //j++;
        if(l <= 0)
        {
            break;
        }

    }
    cout<<v.size() - j<<'\n';
    for(int i = 0; i < s.length(); i++)
    {
        if(mp[s[i]] != 0)
        {
            cout<<s[i];
        }
    }
}
