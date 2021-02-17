/*
a ==> n
ai + aj ==> odd
swap(ai , aj)
xi < yi xi = yi
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[10];
int main()
{
int n;
cin >> n;
for(int i = 0; i < n; i++)
{
   cin >> a[i];
   b[a[i] % 2] = 1;
}
if(b[0] && b[1]){
sort(a , a + n);
}
int j = 0;
for(int i = 0; i < n; i++)
{
   cout<<a[i]<<" ";
}
return 0;
}
