/*m fruits
if valera want to buy he include it
in the list several times
input==>n,m;
output==>max min

*/
#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
vector<int>v;
int a[210];
string s[200];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < k; i++)
    {
        cin>>s[i];
        m[s[i]]++;
    }
    for(int i = 0; i < k; i++)
    {
        //cout<<m[s[i]]<<'\n';
        int cnt = 0;
        for(int j = 0;j <= i; j++)
        {
            if(s[j] == s[i])
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
           // cout<<s[i]<<'\n';
            v.push_back(m[s[i]]);
        }
    }
    sort(v.begin() , v.end());
    int mx = 0,mn = 0;
    int j = 0, l = v.size() - 1;
    for(int i = 0; i < v.size(); i++)
    {
        mn += v[l]*a[i];
        l--;
    }
    int h = n - 1, p =v.size() - 1; ;
    for(int i = 0;i < v.size(); i++)
    {
        mx += v[p] * a[h];
        p--;
        h--;
    }
    cout<<mn<<" "<<mx;
    return 0;
}
