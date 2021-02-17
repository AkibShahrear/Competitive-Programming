/*
1 1 1
1 1 1
0 1 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

*/
#include<bits/stdc++.h>
using namespace std;
int a[100][100],b[100][100];
int main()
{
    int n , m;
    cin >> n >> m;
    int one = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                one++;
            }
        }
    }
    if(one == 0)
    {
        cout<<0;
        return 0;
    }
    vector<pair<int,int> >v;
    bool is = 1;
    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0;j < m - 1; j++)
        { //if(i + 1 < n && i - 1 >= 0 && j + 1 < m && j - 1 >= 0){
           /* if(a[i][j] == 0 && a[i][j + 1] == 1 && a[i][j - 1] == 1)
            {
                cout<< -1;
                return 0;
            }
            if(a[i][j] == 0 && a[i - 1][j] == 1 && a[i + 1][j] == 1)
            {
                cout<< -1;
                return 0;
            }*/
            if(a[i][j]  && a[i][j + 1] && a[i + 1][j]  && a[i + 1][j + 1])
            {
               b[i][j] = b[i + 1][j] = b[i][j + 1] = b[i + 1][j + 1] = 1;
                cnt++;
                v.push_back(make_pair(i,j));
            }


        }
    }
   for(int i = 0;i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           is &=a[i][j] ^ b[i][j] ^ 1;

       }
       if(!is)
       {
           cout<<-1;
           return 0;
       }
   }

    cout<<v.size()<<'\n';
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first + 1<<" "<<v[i].second + 1<<'\n';
    }
    return 0;
}

