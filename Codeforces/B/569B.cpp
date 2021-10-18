#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int is[1000010];
int n , a[1001000];
int main()
{
    cin >> n;
    memset(a,0,sizeof(is));
    vi v;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        is[a[i]]++;
    }
    for(int i = 1; i <= n; i++)
    {
     if(is[i] == 0)
     {
         v.push_back(i);
     }

    }

    int j = 0;
     for(int i = 1; i <= n; i++)
    {
        if(is[a[i]] == 1)
        {
            if(a[i] > n){cout<<v[j]<<" "; j++;}
            else {cout<<a[i]<<" ";}

        }
        else if(is[a[i]] > 1)
        {
             if(a[i] > n){cout<<v[j]<<" "; j++;}
           else {cout<<a[i]<<" ";
            is[a[i]] = 0;}
        }
        else if(is[a[i]] == 0)
        {
            cout<<v[j]<<" ";
            j++;
        }

    }
    return 0;
}
