#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
char s[100][100];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){

         cin >> s[i][j];

        }

    }
    int a , b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
       for(int j = 0 ; j < m; j++)
       {

           //cout<<"step: \n";
           if((i + a) <= n && (j + b) <= m)
           {
               int pnt = 0;
               int y = (i + a);
               int z = (j + b);
               for(int k = i; k < y; k++)
               {
                   for(int l = j; l < z; l++)
                   {
                      //cout<<"s["<<k<<"]["<<l<<"]: "<<s[k][l]<<'\n';
                       if(s[k][l] == '0')
                       {
                           pnt++;
                       }
                   }
               }
              //cout<<"pnt: "<<pnt<<'\n';
              cnt = max(cnt , pnt);
           }
            if((i + b) <= n && (j + a) <= m)
           {
               int pnt = 0;
               int y = (i + b);
               int z = (j + a);
               for(int k = i; k < y; k++)
               {
                   for(int l = j; l < z; l++)
                   {
                      // cout<<"s["<<k<<"]["<<l<<"]: "<<s[k][l]<<'\n';
                       if(s[k][l] == '0')
                       {
                           pnt++;
                       }
                   }
               }
              //cout<<"pnt: "<<pnt<<'\n';
              cnt = max(cnt , pnt);
           }
       }
    }
    cout<<(a*b) - cnt;
    return 0;
}
