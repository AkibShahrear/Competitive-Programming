#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int mon[] = {31,28,31,30,31,30,31,31,30,31,30,31};
bool leap(int n)
{
    if(n%4 == 0 && n%100 != 0)
    {
        return 1;
    }
    else if(n%400 == 0)
    {
        return 1;
    }
    return 0;
}
void solve()
{
    int y1, m1, d1, y2, m2, d2;
    scanf("%d:%d:%d",&y1,&m1,&d1);
    scanf("%d:%d:%d",&y2,&m2,&d2);
    if(y1 == y2 && m1 == m2 && d1 == d2)
    {
        cout<<0;
        return;
    }
    if(y1 > y2)
       {
           swap(y1 , y2);
            swap(d1 ,d2);
            swap(m1 , m2);
       }
       if(y1 == y2)
       {
           if(m2 < m1)
           {
               swap(d2,d1);
               swap(m2,m1);
           }
           else if(m2 == m1)
           {
               if(d2 < d1){
               swap(d2 , d1);
               }
           }
       }
    //cout<<y1<<'\n'<<m1<<'\n'<<d1;
    int cnt = 0;
    if(y2 > y1){
    if(leap(y1)){
        if(m1 > 2)
        {
            int p = m1 - 1;
            int q = mon[p] - d1;
            cnt += q;
            for(int i = m1; i < 12; i++)
            {
                cnt += mon[i];
            }
        }
        else{
            if(m1 == 1){
            int p = m1 - 1;
            int q = mon[p] - d1;
            cnt += q;
            cnt += 1;
            }
            else if(m1 == 2)
            {
            int p = m1 - 1;
            int q = mon[p] - d1;
            cnt += q;
            cnt += 1;
            }
            for(int i = m1; i < 12; i++)
            {
                cnt += mon[i];
            }
        }
    }
        else{
            int p = m1 - 1;
            int q = mon[p] - d1;
            cnt += q;
            for(int i = m1; i < 12; i++)
            {
                cnt += mon[i];
            }
        }
    }
        //cout<<"cnt: "<<cnt<<'\n';
        for(int i = y1 + 1; i < y2; i++)
        {
            if(leap(i))
            {
                cnt += 366;
            }
            else{
                cnt += 365;
            }
        }
       //cout<<"cnt: "<<cnt<<'\n';
    if(leap(y2))
    {
        if(y1 == y2)
         {
             if(m1 <= 2 && m2 > 2)
             {
                 cnt++;
             }
             cnt += (mon[m1 - 1] - d1);
             //cout<<"cnt: "<<cnt<<'\n';
             for(int i = m1; i < m2 - 1; i++)
             {
                 cnt += mon[i];
             }
             //cout<<"cnt: "<<cnt<<'\n';
             cnt += d2;
             cout<<cnt;
             return;
         }
        //cout<<"Hi: ";
        if(m2 < 2)
        {
            cnt += d2;
        }
        else if(m2 == 2){
            if(y1 == y2)
            {
                cnt -= d1;
            }
            cnt += 31;
            cnt += d2;
        }
        else{
            for(int i = 0; i < m2 - 1; i++)
            {
                cnt += mon[i];
            }
            cnt += 1;
            cnt += d2;
        }
    }
    else{
         //cout<<"Hi1";
         if(y1 == y2)
         {
             cnt -= d1;
             if(m2 > m1){
             cnt += (mon[m1 - 1]);
             }
             for(int i = m1; i < m2 - 1; i++)
             {
                 cnt += mon[m1];
             }
             cnt += d2;
             cout<<cnt;
             return;
         }
         for(int i = 0; i < m2 - 1; i++)
            {
                cnt += mon[i];
            }
            cnt += d2;
    }
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
