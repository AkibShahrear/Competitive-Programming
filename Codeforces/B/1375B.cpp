/*
n rows and m columns
grid is good if for each cell if it
has a number k > 0 written on it
then k of its neighboring cells have
a number > 0
*/
#include<bits/stdc++.h>
using namespace std;
long long a[400][400];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n , m;
        cin >> n >> m;
        int p = 0,q = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        bool is = 0;
         for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int cnt = 0;
                if(i > 0)cnt++;
                if(i + 1 < n) cnt++;
                if(j > 0) cnt++;
                if(j + 1 < m) cnt++;
                if(cnt < a[i][j])
                {
                    is = 1;
                    cout<<"NO\n";
                    break;

                }
                a[i][j] = cnt;
            }
            if(is)
            {
                break;
            }
        }
        if(!is){
        cout<<"YES\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<'\n';
        }
        }

    }
    return 0;
}
