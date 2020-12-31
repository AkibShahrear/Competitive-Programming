/*
n jars of honey
i ---> ai kilo
if the jar has less than k kilo
or if winnie has alreay eaten from it three timss
else k kilos
    input ==> n k
    a1,a2,a3..an
*/
#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n,k;
int sum = 0;
cin >> n >> k;
for(int i = 0; i < n; i++)
{
    cin >> a[i];
    int p = k*3;
    if(p < a[i])
    {
        sum += a[i] - p;
    }
    else{
        sum += a[i] % k;
    }
}
cout<<sum;
}
