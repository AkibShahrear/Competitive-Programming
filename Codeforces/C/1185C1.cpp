#include<bits/stdc++.h>
using namespace std;
int t[1000],b[1000];
int main()
{
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for(int i = 0; i < n; i++)
    {
        memset(b , 0 ,sizeof(b));
        int sum = t[i] , cnt = 1,pnt  =0;
        bool is = 0;
        for(int j = 0; j < i; j++)
        {
            b[j] = t[j];
        }
        sort(b , b + i);
        for(int j = 0; j < i; j++)
        {

            if(sum + b[j] <= m)
            {
                sum += b[j];
                cnt++;
            }
            else{
                is = 1;
                pnt++;
                break;
            }
        }
        //cout<<"sum: "<<sum<<'\n';
        if(pnt == 0)
        {
            cout<<0<<" ";
        }
        else{
        cout<<(i + 1) - cnt <<" ";
        }
    }
    return 0;
}
