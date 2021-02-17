#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        vector<int>a(4 * n);
        for(int i = 0;i < 4*n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin() , a.end());
        int area =  a[0] * a[4 * n - 1];
        bool is = 1;
        for(int i = 0;i < n; ++i)
        {
            int l = i * 2, r = 4 * n - (i * 2) - 1;
            if(a[l] != a[l + 1] || a[r] != a[r - 1] || a[l]*1ll*a[r] != area){
                is = 0;
            }
        }
        if(is) {cout<<"YES"<<endl;}
        else{ cout<<"NO\n";}


    }
}
