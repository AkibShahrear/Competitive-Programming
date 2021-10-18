#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    vi odd;
    int sum = 0;
    //vi even;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] & 1)
        {
            odd.push_back(a[i]);
        }
        else{
            sum += a[i];
        }
    }
    if(odd.size() == 0)
    {
        cout<<0;
        return 0;
    }
    else{
        sort(odd.rbegin(), odd.rend());
        int l = odd.size();
        if(l%2 == 0)
        {
            for(int i = 0 ; i < l - 1; i++)
            {
                sum += odd[i];
            }
        }
        else{
            for(int i = 0; i < l; i++)
            {
                sum += odd[i];
            }
        }
        cout<<sum<<'\n';
    }

}
