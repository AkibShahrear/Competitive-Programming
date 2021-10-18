#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
char a[1000000] , b[1000000];
int num[100];
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ll n ,  m;
cin >> n >> m;
string s;
cin >> s;
for(int i = 0; i < 26 ; i++)
{
    num[i] = i;
}
for(int i = 0; i < m; i++)
{
    char a , b;
    cin >> a >> b;
   int p = a - 'a';
   int q = b - 'a';
   for(int i = 0 ; i < 26; i++)
   {
       if(num[i] == p) num[i] = q;
       else if(num[i] == q) num[i] = p;
   }

}
for(int i = 0; i < n; ++i)
{
 cout<<char('a' + num[s[i] - 'a']);
}
cout<<'\n';

}
