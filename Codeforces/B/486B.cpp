#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int A[110][110], B[110][110], C[110][110];
map<int , int>row , col;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >>A[i][j];
            B[i][j] = A[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(A[i][j] == 0)
            {
               // cout<<"i: "<<i<<" j: "<<j<<'\n';
                int k = i;
                int p = j;
                for(int l = 0; l < m; l++)
                {
                // cin >>A[i][j];
                 //B[i][j] = A[i][j];
                 B[k][l] = 0;
                 }
                 for(int l = 0; l < n; l++)
                 {
                     B[l][p] = 0;
                 }
              }
            }
        }
        for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(B[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
        //cout<<'\n';
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                C[i][j] = 1;
            }
            else{
                C[i][j] = 0;
            }
        }
    }
    bool is = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
          if(C[i][j] != A[i][j])
          {
              cout<<"NO\n";
              return 0;
          }
        }
        //cout<<'\n';
    }
    cout<<"YES\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<'\n';
    }

    }

