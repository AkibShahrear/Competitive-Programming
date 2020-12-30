/*
crossward n x m
cross all repeated words in
rows and column


*/
#include<bits/stdc++.h>
using namespace std;
char a[210][210],b[1000][1000],c[10001][10001];
string s[200],p = "";
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i] + 1;
        cout<<"a[i]: "<<a[i]<<'\n';
    }
    int k = 0;
     for(int i = 1; i <= n; i++)
    {

        for(int k = 1; k <= m; k++)
        {

          c[i][a[i][k]]++;
          b[k][a[i][k]]++;
        }
    }
     for(int i = 1; i <= n; i++)
    {

        for(int k = 1; k <= m; k++)
        {
           if(max(c[i][a[i][k]] , b[k][a[i][k]]) == 1)
           {
               p += a[i][k];
           }
        }
    }

    cout<<p;

    return 0;
}
