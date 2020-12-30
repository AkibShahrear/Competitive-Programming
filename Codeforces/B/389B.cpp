#include<bits/stdc++.h>
using namespace std;
char a[500][500];

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == '#')
            {
                cnt++;
            }

        }
    }
    if(cnt%5!=0)
    {
        cout<<"NO";
        return 0;
    }
    else{
            int cnt2 = 0;
        for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {

            if(a[i][j] == '#' && a[i-1][j] == '#' && a[i][j-1] == '#' && a[i][j+1] == '#' && a[i+1][j] == '#')
            {
                cnt2++;
                a[i][j] = '0';
                a[i-1][j] = '0';
                a[i][j-1] = '0';
                a[i][j+1] = '0';
                a[i+1][j] = '0';
            }

        }
    }
    if((cnt/5)==cnt2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
}
