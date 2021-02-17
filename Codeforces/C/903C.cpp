#include<bits/stdc++.h>
using namespace std;
long long a[6000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    for(int i = 0; i < n; i++)
    {
        long long p = a[i], t = i;
        if(a[i] != 0 && a[i] != -1){
        for(int j = i; j < n; j++)
        {
            if(p < a[j])
            {
          //   cout << "p: "<<p<< "a[j]: "<<a[j]<<'\n';
             a[t] =  0;
             p = a[j];
             t = j;

            }
        }
        // cout<<"t: "<<a[t]<<'\n';
        }
        if(t != i){
         a[t] = -1;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
