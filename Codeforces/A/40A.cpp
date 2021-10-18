#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    int x , y;
    cin >> x >> y;
    int p = (x*x) + (y*y);
    int q = sqrt(p);
    if(q*q == p)
    {
        cout<<"black";
        return;
    }
    if(x == 0 || y == 0)
    {
        cout<<"black";
        return;
    }
    /*if(x > 0)
    {
        if(y == 0)
        {
            cout<<"black";
            return;
        }
        if(x == abs(y))
        {
            x--;
        }
        if(y > 0)
        {
            if(x%2 == 0)
            {
            cout<<"black";
            return;
            }
            else{
            cout<<"white";
            return;
            }
        }
        else if(y < 0)
        {
           if(x%2 == 0)
            {
            cout<<"white";
            return;
            }
            else{
            cout<<"black";
            return;
            }
        }
    }
    else{
        if(y == 0)
        {
            cout<<"black";
            return;
        }
        if(abs(x) == abs(y))
        {
            x--;
        }
        if(y > 0)
        {
            x = abs(x);
            if(x%2 == 0)
            {
            cout<<"white";
            return;
            }
            else{
            cout<<"black";
            return;
            }
        }
        else if(y < 0)
        {
            x = abs(x);
           if(x%2 == 0)
            {
            cout<<"black";
            return;
            }
            else{
            cout<<"white";
            return;
            }
        }
    }*/
    if(x*y < 0) q++;
    if(!(q & 1))
    {
        cout<< "black"<<endl;
    }
    else{cout<<"white"<<endl;}
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
