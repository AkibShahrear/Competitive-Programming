#include<bits/stdc++.h>
using namespace std;
long long a[4000],b[4000];
int main()
{
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < m; i++)
    {
        cin >> b[i];
    }
    int cnt = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0; j < m ; j++){
        if(b[j] >= a[i]){
           // cout<<"b[j]: "<<b[j]<<" a[i]: "<<a[i]<<'\n';
            cnt++;
            a[i] = 0;
            b[j] = 0;
            break;
        }
        }

    }
    cout<<n - cnt;
    return 0;

}
