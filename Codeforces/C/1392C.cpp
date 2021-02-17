/*
n supports arranged in line
i-th support has height ai
take contiguous segment of supports
which is increasing by heights
add 1 to each of their heights
7 2 2 1 3 5 6  8 7
*/
#include<bits/stdc++.h>
using namespace std;
long long a[3000000];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(a,0,sizeof(a));
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        int k = 0,l = 0;
        long long cnt = 0;
        vector<int>v(n);
        for(int i = 0; i < n - 1 ; i++)
        {
            //cout<<"a[i]: "<<a[i]<<" a[k]: "<<a[k]<<'\n';
          v[i] = a[i + 1] - a[i];
        }
        for(int i = 0; i < n - 1; i++)
        {
            cnt += max(-v[i],0);
        }

        cout<<cnt<<'\n';
    }


    return 0;
}
