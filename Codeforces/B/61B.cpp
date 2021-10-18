#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string p[4];
map<string , int> mp;
void solve()
{
    string a, b , c;
    cin >> a >> b >>c;
    string s = "";
    for(int i = 0; i < a.length(); i++)
    {
        char ch = tolower(a[i]);
        if(ch >= 'a' && ch <= 'z')
        {
            s += ch;
        }
    }
    a = s;
    s = "";
    for(int i = 0; i < b.length(); i++)
    {
        char ch = tolower(b[i]);
        if(ch >= 'a' && ch <= 'z')
        {
            s += ch;
        }
    }
    b = s;
    s = "";
    for(int i = 0; i < c.length(); i++)
    {
        char ch = tolower(c[i]);
        if(ch >= 'a' && ch <= 'z')
        {
            s += ch;
        }
    }
    c = s;
    p[0] = a;
    p[1] = b;
    p[2] = c;

    vi v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    //cout<<"a: "<<p[0]<<"\n b: "<<p[1]<<"\n c: "<<p[2]<<'\n';
    vector<string>vs;
    do{
        int l = v[0] , q = v[1] , r = v[2];
        string u = p[l]+p[q]+p[r];
        //vs.push_back(u);
        mp[u] = 1;
    }while(next_permutation(v.begin() , v.end()));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string y;
        cin >> y;
        string h = "";
      for(int i = 0; i < y.length(); i++)
      {
         char ch = tolower(y[i]);
         if(ch >= 'a' && ch <= 'z')
         {
             h += ch;
         }
       }
       if(mp[h])
       {
           cout<<"ACC\n";
       }
       else{
        cout<<"WA\n";
       }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
