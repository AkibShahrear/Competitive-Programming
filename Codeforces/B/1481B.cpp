#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long>v(n);
        for(int i = 0; i < n ; i++)
        {
            cin >> v[i];
        }
        long long sum = -1;
        bool is = 0;
        for(int i = 1; i <= k; i++){
        for(int j = 0; j < n - 1; j++)
        {
            if(v[j] < v[j + 1])
            {
                    v[j]++;
                   if(i == k) sum = j + 1;
                   break;
                }
                 if(j == n - 2)
                    {
                        is = 1;
                        cout<< -1<<'\n';
                        break;
                    }
                }
                if(is)
                {
                    break;
                }

            }


     if(!is){
     cout<<sum<<'\n';
     }
        v.clear();

    }
    return 0;
}
