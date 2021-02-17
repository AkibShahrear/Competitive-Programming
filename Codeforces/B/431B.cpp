#include<bits/stdc++.h>
using namespace std;
int s[6][6];
int main()
{
    for(int i = 0; i < 5; i++)
    {
       for(int j = 0; j < 5; j++)
       {
           cin >> s[i][j];
       }
    }
    long long mx = 0;
    for(int i = 0; i < 5; i++)
    {
         for(int j = 0; j < 5; j++)
    {
        if(i != j){
      for(int k = 0; k < 5; k++)
    {
        if(i !=k && j != k){
       for(int l = 0; l < 5; l++)
    {
        if(l != i && l != k && l != j){
      for(int m = 0; m < 5; m++)
    {
        if(m != i && m != j && m != k && m !=l){
        long long p = (s[i][j] + s[j][i] + s[k][l] + s[l][k]) + (s[j][k] + s[k][j] + s[m][l] + s[l][m]) + (s[l][m] + s[m][l]) +(s[k][l] + s[l][k]);
        mx = max(mx , p);
     //   cout<<"p: "<<p<<'\n';
    }
    }
        }
    }
    }
    }
    }
    }
    }
    cout<<mx;
}
