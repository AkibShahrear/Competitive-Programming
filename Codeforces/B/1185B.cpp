#include<bits/stdc++.h>
using namespace std;
const int m = 1000000;
char a[m + 1]; int p;
char b[m + 1]; int k;
bool solve(){
for(int l = 0,r = l,bl = 0,br = bl; l < p || bl < k;l = r,bl = br)
{
    while(r < p && a[r] == a[l]) ++r;
    while(br < k && b[br] == b[bl]) ++br;
    if(a[l] != b[bl]) return false;
    if(r - l > br - bl) return false;
}
return true;
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        scanf("%s",a);
        scanf("%s",b);
        p = strlen(a);
        k = strlen(b);
        printf("%s\n",solve()?"YES":"NO");
    }
    return 0;
}
