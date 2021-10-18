#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x , k;
    cin >> x >> k;
    set<int>s;
    vi v;
    for(int i = 0; i < k; i++)
    {
        int p;
        cin >> p;
        if(p == 1)
        {
            int a , b;
            cin >> a >> b;
            s.insert(a);
            s.insert(b);
        }
        else{
            int a;
            cin >> a;
            s.insert(a);
        }
    }
    int q = x - 1;
    int l = q - s.size();
    //cout<<"l: "<<l<<'\n';
    for(int i = 1; i < x; i++)
    {
        if(!(s.find(i) != s.end()))
        {
            v.push_back(i);
        }
    }
  //  cout<<"v ==> size: "<<v.size()<<'\n';
    int r =  0 ;
   v.push_back({0});
    for(int i = 0; i < v.size() - 1; i++)
    {
        if((v[i + 1] - v[i]) == 1)
        {
            r++;
            i++;
        }
        else{
            r++;
        }
    }
   cout<<r<<" "<<l<<'\n';
}
