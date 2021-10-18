#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
char s[10010];
void solve()
{
    //string s;
    gets(s);
    //cout<<s;
    vector<string>v;
    string p = "";
    int cnt = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        //cout<<"s[i]: "<<s[i]<<'\n';
        if(s[i] == '!' || s[i] == ',' || s[i] == '.' || s[i] == '?')
        {
          if(p.size() > 0)
          {
              v.push_back(p);
              p = "";
          }
          string str = "";
          str += s[i];
          v.push_back(str);
          str = "";
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            p += s[i];
        }
        else if(s[i] == ' ')
        {
            //i++;
            if(p.size() > 0)
            {
              //cout<<p<<' ';
              v.push_back(p);
              p = "";
            }
        }
    }
    v.push_back(p);
    for(int i = 0; i < v.size(); i++)
    {
         if(v[i] == "!" || v[i] == "," || v[i] == "." || v[i] == "?" || i == 0)
        {
            cout<<v[i];
        }
        else{
            cout<<" "<<v[i];
        }

    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
