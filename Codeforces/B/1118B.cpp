#include<bits/stdc++.h>
using namespace std;
int a[200000 + 5];
int main()
{
int n;
cin >> n;

int eP = 0, oP = 0 , eS = 0 ,oS = 0;
for(int i = 0;i < n; i++)
{
    cin >> a[i];
    if(i & 1)
    {
        eS += a[i];
    }
    else{
        oS += a[i];
    }
}
int ans  = 0;
for(int i = 0; i < n; i++)
{
    if(i & 1) eS -= a[i];
    else oS -= a[i];
    if(eP + oS == oP + eS)
    {
        ++ans;
    }
    if(i & 1) eP += a[i];
    else oP += a[i];
}
cout << ans;
return 0;
}
