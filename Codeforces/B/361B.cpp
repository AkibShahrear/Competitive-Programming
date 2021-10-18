#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[1000010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vi v;
    int p = k;
    if(p >= n)
    {
        cout<<-1;
        return 0;
    }
    for(int i = 1; i <= k + 1; i++)
    {
        v.push_back(i);
    }
    if(k == n - 2)
    {
        v.push_back(n);
        swap(v[0] , v[n - 1]);

    }
    else{

        int l = k + 2 , m = l + 1;


        if(l % 2 == 0){
        for(int i = k + 2; i <= n; i++)
        {
            int p = i;
            if(p % 2 == 0)
            {
                v.push_back(m);
                m += 2;
            }
            else{
                v.push_back(l);
                l += 2;
            }
        }
        }
        else {
       //  cout<<"l: "<<l<<" m: "<<m<<'\n';
        for(int i = k + 2; i <= n; i++)
        {
            int p = i;
         //   cout<<"p: "<< p<<'\n';
            if(p % 2 == 0)
            {
                v.push_back(l);
                l += 2;
            }
            else{
                v.push_back(m);
                m += 2;
            }
        }
        }
    }
    if(v[n - 1] > n){v[0] = n; v[n - 1] = 1;}
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

