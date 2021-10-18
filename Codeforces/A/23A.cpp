#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
map<string , int> mp;
vector<string> v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int mx  = 0;
    for(int i = 1; i < s.length(); i++)
    {
       for(int j = 0; j < s.length(); j++)
       {
           string p = s.substr(j , i);
           //cout<<"p: "<<p<<'\n';
           mp[p]++;
           if(mp[p] > 1)
           {
             //  cout<<"new p: "<<p<<'\n';
               if(p.size() > mx)
               {
                   mx = p.size();
               }
           }

       }
         mp.clear();
    }
    cout<<mx;


    return 0;
}
