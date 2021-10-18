#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
char a[1500][1500];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    vector<pair<int, int> >v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;  j++)
        {
            cin >> a[i][j];
        }
    }
    int mx = 0;
    set<int>s;
    for(int i = 0; i < n; i++)
    {
        int p = 0, q = 0;
        for(int j = 0; j < m;  j++)
        {
             if(a[i][j] == 'G'){
                p = j;
             }
             else if(a[i][j] == 'S'){
                q = j;
             }
         }
         if(p >= q)
         {
             cout<<-1;
             return 0;
         }
      //   cout<<"p: "<<p<<" q: "<<q<<'\n';
    //     mx = max(mx , (q - p - 1));
    s.insert((q - p -1));
    }
    cout<<s.size();
}
