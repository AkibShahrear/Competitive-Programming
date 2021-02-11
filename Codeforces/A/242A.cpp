#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b;
    vector<pair<int,int> >v;
    cin>>x>>y>>a>>b;
    int petya = b;
    int vasya = a;
    int diff_vasya = x - a;
    int diff_petya = y - b;
    int i =0;
    if(a > b)
    {
        i = a;
    }
    else{
        i = b + 1;
    }
        for( i ; i <= x; i++)
        {
            for(int j = b ; j <= y; j++)
            {
                if(j < i && j != i){
                v.push_back(make_pair(i , j));
                }
            }
        }
        cout<<v.size()<<'\n';
        for(int i = 0;i < v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<'\n';
        }
    }




