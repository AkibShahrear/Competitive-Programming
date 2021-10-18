#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[200100] , b[200100];
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n; i++)
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    ll sum = 0;
    for(int i = 1; i < n; i++)
    {
        //cout<<"b[i]: "<<b[i]<<'\n';
        //cout<<"b[i - 1]: "<<b[i - 1]<<" b[i]: "<<b[i]<<'\n';
        sum += abs(b[i + 1] - b[i]);
    }
    cout<<sum<<'\n';
    return 0;
}

