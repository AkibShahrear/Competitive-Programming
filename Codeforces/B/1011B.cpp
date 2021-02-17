#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int main()
{
    int n , m;
    cin >> n >> m;
    vector<int>a(N + 1);
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }


    for(int i = N; i >= 1; i--)
    {
        vector<int>v(a);
       int k = 0;
       for(int j = 1;j <= N; j++)
       while(v[j] >= i){
        k++;
        v[j] -= i;
       }
       if(k >= n){
        cout<<i<<endl;
        return 0;
       }
    }
    cout<<0<<endl;
    return 0;
}
