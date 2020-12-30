#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if((a[i] * c1) < c2){
        sum +=(a[i]*c1);
        }
        else sum += c2;
    }
    sum = min(sum , c3);
    int num = 0;
    for(int i = 0; i < m; i++)
    {
        cin>>b[i];
        if((b[i] * c1) < c2){
          num += (b[i] * c1);
        }
        else num += c2;
    }
    num = min(num , c3);
    long long p = c3 * 2,q = c4, r = sum + num, s = 0;
    cout<<min(r, min(p , q));
}
