#include<bits/stdc++.h>
using namespace std;
int a[10000], b[10000];
bool cmp(int x, int y)
{
    return a[x] > a[y];
}
int main()
{
    int n , k;
    cin >> n >> k;
    vector<int>v(n),h;
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
        b[i] = i;
    }
    int sum = 0;
    sort(b + 1 , b + n + 1 , cmp);

    for(int i = 1; i <= k; i++)
    {
      //  cout<<"b[i]: "<<b[i]<<'\n';
        sum += a[b[i]];
        a[b[i]] = - 1;
    }
    cout<<sum<<'\n';
    sort(b + 1,b + k + 1);
    for(int i = 1; i < k; i++)
    {
        cout<<b[i] - b[i - 1]<<" ";
    }
    cout<<n - b[k - 1]<<'\n';
    return 0;

}
