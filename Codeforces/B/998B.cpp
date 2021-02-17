#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int n , b;
    cin >> n >> b;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = 1000;
    vector<int>v;
    for(int i = 0; i < n; i++)
    {
        int o = 0 , e = 0;;
        for(int j = 0; j < n; j++)
        {
            if(a[j]%2 == 0)
            {

                e++;
              if(o == e && o!= 0)
              {
                  v.push_back(abs(a[j] - a[j + 1]));
              }
            }
            else{
                    o++;
              if(o == e && e!= 0)
              {
                  v.push_back(abs(a[j] - a[j + 1]));
              }
            }
            i = j;
        }
    }
    sort(v.begin() , v.end());
    int cnt  = 0,sum = 0;
    for(int i = 0; i < v.size();i++)
    {
        //cout<<"sum: "<<sum<<'\n';
        if(sum <= b)
            {
                sum += v[i];
                cnt++;
            }
         else{
            break;
         }
    }
    cout<<cnt - 1;

}
